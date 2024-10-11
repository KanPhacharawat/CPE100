// Phacharawat Eakgawatphokhin 67070503426

#include <stdio.h>
#include <string.h>

int main(void){
    int type;
    char product[100];
    float money, change;
    int isvalid = 1;

    scanf("%d %f", &type, &money);

    if(type == 1){
        change = money - 7.0;
        strcpy(product, "Water");
    }else if(type == 2){
        change = money - 13.0;
        strcpy(product, "Soda");
    }else if(type == 3){
        change = money - 20.0;
        strcpy(product, "Juice");
    }

    if(type < 1 || type > 3){
        printf("Invalid choice!");
        isvalid = 0;
    }
    if(change >= 0.0 && isvalid){
        printf("Dispensing your drink: %s\n", product);
    }if(change > 0.0 && isvalid){
        printf("Here is your change: %.2f", change);
    }if(change == 0 && isvalid){
        printf("No change");
    }if(change < 0 && isvalid){
        printf("Insufficient funds");
    }

    return 0;
}