// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int n;
    float balance = 0.0;

    scanf("%d", &n);

    while(n != 4){
        float cash;
        switch (n)
        {
        case 1:
            printf("Balance: %.2f Baht\n", balance);
            break;
        case 2:
            scanf("%f", &cash);
            if(cash < 0){
                printf("Invalid deposit amount!\n");
                break;
            }
            balance += cash;
            printf("Balance: %.2f Baht\n", balance);
            break;
        case 3:
            scanf("%f", &cash);
            if(cash <= 0) printf("Invalid withdrawal amount!\n");
            else if(cash > balance) printf("Insufficient funds!\n");
            else {
                balance -= cash;
                printf("Balance: %.2f Baht\n", balance);
            }
            break;
        default:
            printf("Invalid option!\n");
        }
        scanf("%d", &n);
    }
    printf("Exiting program...");
    return 0;
}