// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <math.h>

int isPrime(unsigned long long int a) {
    if (a < 2) return 0;
    if (a == 2 || a == 3) return 1;
    if (a % 2 == 0 || a % 3 == 0) return 0;

    for (unsigned long long int i = 5; i * i <= a; i += 6) {
        if (a % i == 0 || a % (i + 2) == 0) return 0;
    }
    return 1;
}

void fibonacciRange(unsigned long long int n, unsigned long long int m) {
    if (n > m) {
        printf("No Output\n");
        return;
    }

    unsigned long long int a = 0;
    unsigned long long int b = 1;
    int isDisplay = 0;

    while (a <= m) {
        if (a >= n && isPrime(a)) {
            printf("%llu\n", a);
            isDisplay = 1;
        }
        unsigned long long int next = a + b;
        a = b;
        b = next;
    }

    if (!isDisplay) {
        printf("No Output\n");
    }
}

int main(void) {
    unsigned long long int n, m;
    scanf("%llu %llu", &n, &m);
    fibonacciRange(n, m);
    return 0;
}
