// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    if(n <= 0){
        printf("Array is empty");
        return 0;
    }

    int arr[n];
    int frequent[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) count++;
        }
        frequent[i] = count;
    }

    int max = 0;
    for(int i = 0; i < n; i++){
        if(frequent[i] > max){
            max = frequent[i];
        }
    }

    int max_count = 0;
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate && frequent[i] == max) {
            max_count++;
        }
    }

    if (max_count > 1) {
        printf("Most frequent values: ");
    } else {
        printf("Most frequent value: ");
    }

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate && frequent[i] == max) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nFrequency: %d\n", max);


    return 0;
}