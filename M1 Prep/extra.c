// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

void printBinary(int n){
    if(n == 0){
        return;
    }
    printBinary(n/2);
    printf("%d", n % 2);
}

void printBinaryReverse(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n % 2);
    printBinaryReverse(n / 2);
}

int main(void){
    int n;
    scanf("%d", &n);

    if(n <0){
        printf("Invalid input. Please enter a positive integer.");
        return 0;
    }

    if(n == 0) {
        printf("0\n0");
        return 0;
    }

    printBinary(n);
    printf("\n");
    printBinaryReverse(n);
    return 0;
}