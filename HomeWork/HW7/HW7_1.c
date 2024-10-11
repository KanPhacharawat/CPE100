// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int power(int n, int r){
    int result = 1;

    for(int i = 0; i < r; i++){
        result *= n;
    }
    return result;
}

int digitCount(int x){
    int n = 0;
    while(x){
        n++;
        x /= 10;
    }
    return n;
}

int isArmstrong(int n){
    int digits = digitCount(n);
    int temp = n;
    int sum = 0;

    while(temp){
        int remain = temp % 10;
        sum += (int) power(remain, digits);
        temp /= 10;
    }

    if(sum == n) return 1;
    else return 0;
}

int main(void){
    int n;
    scanf("%d", &n);

    if(n < 0){
        printf("Armstrong Number cannot be negative");
        return 0;
    }

    if(n < 10){
        printf("%d is an Armstrong number", n);
        return 0;
    }

    if(isArmstrong(n)) printf("%d is an Armstrong number", n);
    else printf("%d is not an Armstrong number", n);

    return 0;
}