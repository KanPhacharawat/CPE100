// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int SumOfElements(int* arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int ProductOfElements(int* arr, int n){
    int sum = 1;
    for(int i = 0; i < n; i++) sum *= arr[i];   
    return sum;
}

int SumOfPowers(int* arr, int n){
    for(int i = 0; i < n; i++) arr[i] = arr[i] * arr[i];

    return SumOfElements(arr, n);
}

int main(void){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int mode;
    scanf("%d", &mode);

    switch (mode){
    case 1:
        printf("%d", SumOfElements(arr, n));
        break;
    case 2:
        printf("%d", ProductOfElements(arr, n));
        break;
    case 3:
        printf("%d", SumOfPowers(arr, n));
        break;

    return 0;
    }
}