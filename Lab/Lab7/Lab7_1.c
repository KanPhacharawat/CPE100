// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int summation(int a, int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        sum += i;
    }
    return sum;
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    
    printf("%d", summation(a,b));

    return 0;
}