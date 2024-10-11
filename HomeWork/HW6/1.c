// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq = 0;
    int max[n];
    int maxCount = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int counter = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                counter++;
            }
        }
        if(counter > freq){
            freq = counter;
            max[maxCount] = arr[i];
        }else if(counter == freq){
            maxCount++;
            freq = counter;
            max[maxCount] = arr[i];
        }
    }

    if(maxCount > 1){
        printf("Most frequent value: ");
        for(int i = 0; i <= maxCount; i++){
            printf("%d ", max[i]);
        }
    }else {
        printf("Most frequent value: %d\n", max[0]);
    }

    printf("Frequency: %d", freq);
    return 0;
}