// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

void printBinary(int n){
    if(n == 0){
        return;
    }
    printBinary(n/2);
    printf("%d", n % 2);
}

void printOctal(int n) {
    if (n == 0) {
        return;
    }
    printOctal(n / 8);
    printf("%d", n % 8);
}

void printHexa(int n) {
    if (n == 0) {
        return;
    }
    char character[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int output = n % 16;
    printHexa(n / 16);
    
    if (output > 9) {
        printf("%c", character[output - 10]);
    } else {
        printf("%d", output);
    }
}

int main(void) {
    int n;
    int b;

    scanf("%d %d", &n, &b);

    int left = n;

    if (left == 0) {
        printf("0\n");
        return 0;
    }

    switch (b) {
    case 1:
        if (left == 0) {
            printf("0");
        } else {
            printBinary(left);
        }
        break;
    case 2:
        if (n == 0) {
            printf("0");
        } else {
            printOctal(left);
        }
        break;
    case 3:
        if (n == 0) {
            printf("0");
        } else {
            printHexa(left);
        }
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}