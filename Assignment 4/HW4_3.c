// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int isPrime(int a){
    if(a == 1) return 0;
    if(a == 2) return 1;
    if(a <= 0) return 0;

    for(int i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
            break;
        }
    }
}

int isContain(int a, int target) {
    while (a != 0) {
        int digit = a % 10;
        if (digit == target) {
            return 1;
        }
        a /= 10;
    }
    return 0;
}

int main(void){
    int a,b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    if(a == b) {
        if(isPrime(a)){
            sum = a;
        }
    }

    for(int i = a+1; i < b; i++){
        if(isPrime(i) && !isContain(i, 3)){
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}