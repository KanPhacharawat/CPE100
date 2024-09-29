// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    float square_a = pow(a,2);
    float square_b = pow(b,2);
    float square_c = pow(c,2);
    float root_a = sqrt(a);
    float root_b = sqrt(b);
    float root_c = sqrt(c);

    printf("Square: a = %.2lf, b = %.2lf, c = %.2lf\n", square_a, square_b, square_c);
    printf("Square root: a = %.2lf, b = %.2lf, c = %.2lf", root_a, root_b, root_c);
    return 0;
}