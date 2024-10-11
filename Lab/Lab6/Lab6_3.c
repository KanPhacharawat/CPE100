// Phacharawat Eakgawatphokhin
// 67070503425

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return 1;
    return 0;
}

int main(void){
    char text[100];
    scanf("%s", &text);
    int v = 0;
    int c = 0;

    for(int i = 0; i < strlen(text); i++){
        text[i] = tolower(text[i]);
        if(isVowel(text[i]))v++;
        else c++;
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d", c);
    return 0;
}