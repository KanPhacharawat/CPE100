#include <stdio.h>
#include <math.h>

int isPrime(unsigned long long int a){
   if(a <= 1) return 0;
    if(a <= 3) return 1;
    if(a % 2 == 0 || a % 3 == 0) return 0;

    for(unsigned long long int i = 2; i < a; i++){
        if(a % i == 0) return 0;
    }
    return 1;
}

int isFibonacci(unsigned long long int x){
    if(x<0) return 0;

    unsigned long long int a = 5 * x * x + 4;
    unsigned long long int b = 5 * x * x - 4;

    unsigned long long int sqrt_a = (unsigned long long int)sqrt(a);
    unsigned long long int sqrt_b = (unsigned long long int)sqrt(b);

    if(sqrt_a * sqrt_a == a || sqrt_b * sqrt_b == b) return 1;
    return 0;
}

int main(void){
    unsigned long long int n,m;
    scanf("%llu %llu", &n, &m);

    for(unsigned long long int i = n; i <= m; i++){
        if(isFibonacci(i) && isPrime(i)) printf("%llu\n", i);
    }
    return 0;
}