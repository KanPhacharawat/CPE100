// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("The input is invalid\n");
        return 0;
    }

    if (n % 2 == 1) {
        // For odd n
        for (int i = 0; i < n / 2 + 1; i++) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < n - 2 * i; j++) {
                printf("*");
            }
            printf("\n");
        }

        for (int i = n / 2 - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < n - 2 * i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        // For even n
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < n - 2 * i; j++) {
                printf("*");
            }
            printf("\n");
        }

        for (int i = n / 2 - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            for (int j = 0; j < n - 2 * i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}