#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d", &n);

    if(n < 1) {
        printf("Invalid input");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        int j_max = (i == 1) ? 1 : i + i-1;

        for(int j = 1; j <= j_max; j++){
            for(int k = 1; k <= j; k++){
                printf("%d ", k);
            }
            for(int k = j_max; k > 0; k--){
                printf("%d ", k);
            }
        }
        printf("\n");
    }
}