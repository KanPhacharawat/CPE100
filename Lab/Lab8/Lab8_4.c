// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>

int ft_strlen(char* text){
    int i = 0;
    while(text[i]){
        i++;
    }
    return i;
}

int main(void){
    char text[100];
    scanf("%s", text);

    printf("%d", ft_strlen(text));
    return 0;
}