// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include<stdlib.h>

void decimalToBinary(long n){
    if(n == 0){
        return;
    }
    decimalToBinary(n/2);
    printf("%ld", n%2);
}

int main(void){
    long n;
    scanf("%ld", &n);
    if(n < 0){
        printf("-");
        n = abs(n);
    }
    if(n == 0) {
        printf("0");
        return 0;
    }
    decimalToBinary(n);


    return 0;
}