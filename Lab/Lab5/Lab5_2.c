// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Log10: a = %.2f, b = %.2f, c = %.2f\n", log10(a), log10(b), log10(c));
    printf("Log base e: a = %.2f, b = %.2f, c = %.2f", log(a), log(b), log(c));
    return 0;
}