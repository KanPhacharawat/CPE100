// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int gcd(int a, int b){
    if(b == 0) return a;
    int remain = a % b;
    return gcd(b, remain);
}

int main(void){
    int a,b;

    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d is %d", a , b, gcd(a,b));

    return 0;
}