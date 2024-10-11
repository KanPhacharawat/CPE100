// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

void UserInput(int n, float* arr)
{
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
}

float CalculateAverage(int n, float* arr)
{
    float sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    float average = sum / n;

    return average;
}

void DisplayAverageAndGradeClassification(float average)
{
    printf("%.2f\n", average);

    if(average >= 90) printf("A");
    else if(average >= 80) printf("B");
    else if(average >= 70) printf("C");
    else if(average >= 60) printf("D");
    else printf("F");
}

int main()
{
    int n;
    scanf("%d", &n);

    float arr[n];
    UserInput(n, arr);

    float average = CalculateAverage(n, arr);

    DisplayAverageAndGradeClassification(average);

    return 0;
}