#include <stdio.h>
#include <string.h>

int main(void){
    float score;
    scanf("%f", &score);

    if(score > 100.0 || score < 0.0){
        printf("Invalid score!");
        return 0;
    }else {
        if(score >= 90.0) printf("A");
        else if(score >= 85.0) printf("B+");
        else if(score >= 80.0) printf("B");
        else if(score >= 75.0) printf("C+");
        else if(score >= 70.0) printf("C");
        else if(score >= 65.0) printf("D+");
        else if(score >= 60.0) printf("D");
        else printf("F");
    }

    return 0;
}