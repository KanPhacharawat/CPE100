// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[100];
    char result[100] = "";
    scanf("%s", text);

    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        int count = 1;

        while (i < length - 1 && text[i] == text[i + 1]) {
            count++;
            i++; 
        }

        char temp[5];
        sprintf(temp, "%c%d", text[i], count);
        strcat(result, temp);
    }
    
    if(strlen(result) < strlen(text)) printf("%s", result);
    else printf("%s", text);
    return 0;
}