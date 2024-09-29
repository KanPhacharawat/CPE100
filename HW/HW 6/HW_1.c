// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0) count++;
    }
    scanf("%d", &m);

    int result[n];

    if(m == 1){
        for(int i = 0; i < count; i++){
            result[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if(arr[i] != 0) result[count++] = arr[i];
        }
    }else if(m == 2){
        int index = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0) result[index++] = arr[i];
        }
        for(int i = n-count; i < n; i++){
            result[i] = 0;
        }
    }
    printf("Modified Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
    return 0;
}