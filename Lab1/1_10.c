#include <stdio.h>

void main(){
    float a;
    scanf("%f", &a);

    float area = 3.14159265358979323846 * a * a;
    printf("%.3f", area);
}