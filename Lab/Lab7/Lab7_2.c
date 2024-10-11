// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int summation(int a, int b, int c){
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(i % c == 0){
            sum += i;
        }
    }
    return sum;
}


int main(void){
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", summation(a,b,c));


    return 0;
}