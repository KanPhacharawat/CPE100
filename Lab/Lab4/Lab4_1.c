// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    if(n < 1 || n > 7){
        printf("Invalid day!");
        return 0;
    }

    switch(n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

    return 0;
}