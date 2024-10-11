// Phacharawat Eakgawatphokhin
// 67070503425

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n < 1){
        printf("Invalid input!");
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d", min);


    return 0;
}