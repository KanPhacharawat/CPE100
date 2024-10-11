// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double result1 = (pow(a,b) + c) / (log10(a) + log(c));
    double result2 = pow(sqrt(a) + sqrt(b), 2) / log(c);
    double diff = result1 - result2;

    printf("Result1 = %.2f\n", result1);
    printf("Result2 = %.2f\n", result2);
    printf("Difference between result1 and result2 = %.2f\n", diff);

    if(diff > 0) printf("Positive");
    else if(diff == 0) printf("Zero");
    else printf("Negative");
    return 0;
}