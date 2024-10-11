// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void isArmstrong(int n){
    if(n < 0) printf("Armstrong Number cannot be negative");
    else if(n < 10) printf("%d is an Armstrong number", n);
    else {
        int original = n;
        
    }
}

int main(void){
    char n[100];
    scanf("%s", n);

    isArmstrong(n);
    return 0;
}