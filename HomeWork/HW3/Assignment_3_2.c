// Phacharawat Eakgawatphokhin 67070503426

#include <stdio.h>
#include <string.h>

int main(void){
    float price;
    int ispromo;
    int type;

    scanf("%f %d %d", &price, &ispromo, &type);

    if(ispromo){
        if(type == 1 || type == 2){
            if(price >= 5000)   price = price * .75;
            else if(price >= 2000) price = price * .85;
            else price = price * .9;
        }else if(type == 3){
            if(price >= 5000)   price = price * .8;
            else if(price >= 2000) price = price * .9;
            else price = price * .95;
        }
    }

    price = price * 1.07;

    printf("Net price after discount and tax: %.2f Baht", price);

    return 0;
}