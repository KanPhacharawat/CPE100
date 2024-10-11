// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void) {
    int n, s;
    scanf("%d %d", &n, &s);

    int counter = 0;
    int arr[20];

    while (n > 0) {
        arr[counter] = n % 10;
        n /= 10;
        counter++;
    }

    for (int i = 0; i < counter / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[counter - i - 1];
        arr[counter - i - 1] = temp;
    }

    s = s % counter;
    if (s > 0) {
        int temp[20];
        for (int i = 0; i < s; i++) {
            temp[i] = arr[counter - s + i];
        }
        for (int i = counter - 1; i >= s; i--) {
            arr[i] = arr[i - s];
        }
        for (int i = 0; i < s; i++) {
            arr[i] = temp[i];
        }
    }

    for (int i = 0; i < counter; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}
