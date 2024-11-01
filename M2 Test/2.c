// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int main(void){
    int m,n;
    scanf("%d %d", &m, &n);
    int saddle[10];
    int x[10], y[10];
    int points = 0;

    int matrix[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int max = matrix[i][j];
            int min = matrix[i][j];
            for(int k = 0; k < m; k++){
                if(max < matrix[k][j]) max = matrix[k][j];
            }
            for(int k = 0; k < n; k++){
                if(min > matrix[i][k]) min = matrix[i][k];
            }
            if(max == matrix[i][j] && min == matrix[i][j]){
                saddle[points] = max;
                x[points] = i+1;
                y[points] = j+1;
                points++;
            }
        }
    }

    if(points > 0){
        for(int i = 0; i < points; i++) printf("Value: %d at Position: (%d, %d)\n", saddle[i], x[i],y[i]);
    }
    else printf("No saddle points found.");

    return 0;
}