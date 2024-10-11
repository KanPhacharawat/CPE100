// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf("  ");
        }
        m = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", m++);
        }
        m -= 2;
        for (int j = 1; j<i; j++) {
            printf("%d ", m--);
        }

        printf("\n");
    }

    return 0;
}
