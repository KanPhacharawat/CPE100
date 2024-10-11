// Phacharawat Eakgawatphokhin
// 67070503425

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n < 0){
        printf("Invalid Input");
        return 0;
    }

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nReversed Array: ");
     for(int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}