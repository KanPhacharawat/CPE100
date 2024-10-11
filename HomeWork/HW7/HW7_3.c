// Phacharawat Eakgawatphokihn
// 67070503426

#include <stdio.h>

int summation(int start, int end){
    int sum = 0;

    for(int i = start; i <= end; i++){
        sum += i;
    }
    return sum;
}

int displayTriangle(int start, int size){
    int c = start;
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", c);
            c++;
        }
        puts("");
    }
    return start + summation(1, size);
}

int main(void){
    int n;
    int numCount = 1;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        numCount = displayTriangle(numCount, arr[i]);
    }

    return 0;
}