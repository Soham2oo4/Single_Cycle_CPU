import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

@cocotb.coroutine
async def reset(dut):
    await RisingEdge(dut.clk)
    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.address.value = 0
    dut.write_data.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1

    print("Reset done!")
    for address in range(dut.WORDS.value):
        dut.address.value = address
        await Timer(1, units="ns")
        assert dut.read_data.value == 0, f"Error at address {address}: expected 0, got {dut.read_data.value}"

@cocotb.test()
async def memory_data_test(dut):
    # Start the clock
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    await reset(dut)

    # Test data: (address, write_data)
    test_data = [
        (0, 0xDEADBEEF),
        (4, 0xCAFEBABE),    
        (8, 0x12345678),
        (12, 0xA5A5A5A5)
    ]
    #write

    dut.byte_enable.value = 0b1111  

    for address, data in test_data:
        dut.address.value = address
        dut.write_data.value = data
        dut.write_enable.value = 1
        await RisingEdge(dut.clk)
        dut.write_enable.value = 0
        await RisingEdge(dut.clk)

        # Read 
        dut.address.value = address
        await RisingEdge(dut.clk)
        assert dut.read_data.value == data, (
            f"Error at address {hex(address)}: expected {hex(data)}, got {hex(int(dut.read_data.value))}"
        )

    print("Memory test passed")
