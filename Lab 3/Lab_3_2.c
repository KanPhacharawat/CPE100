// Phacharawat Eakgawatphokhin 67070503426

#include <stdio.h>

int main(void){
    float gross, tax;
    int perfomance;
    float bonusPercent;

    scanf("%f %f %d", &gross, &tax, &perfomance);

    if(gross < 0){
        printf("Gross salary must be positive");
        return 0;
    }else if(tax < 0 || tax > 100){
        printf("Tax rate out of range");
        return 0;
    }else if(perfomance > 5 || perfomance < 1){
        printf("Performance rating out of range");
        return 0;
    }

    if(perfomance == 5){
        bonusPercent = .2;
    }else if(perfomance == 4){
        bonusPercent = .1;
    }else if(perfomance == 3){
        bonusPercent = .05;
    }else if (perfomance <= 2)
    {
        bonusPercent = 0.0;
    }

    float bonus = gross * bonusPercent;
    float percent_tax = tax / 100.0;
    float tax_count = gross * percent_tax;

    float net_salary = (gross + bonus) - tax_count;

    printf("%.2f", net_salary);

    return 0;
}
