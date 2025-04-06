#include <stdio.h>
int fact(int n1){
    if(n1 == 0 || n1 == 1) return 1;
    else return n1 * fact(n1-1);
}

int main(void){
    float e = 1;
    int n;
    scanf("%d", &n);
    for(int i=1; i<= n; i++){
        int facto = fact(i);
        printf("%d\n",facto);
        e += 1.0/fact(i);
    }
    printf("%f\n", e);
    printf("helo")
    return 0;
}
