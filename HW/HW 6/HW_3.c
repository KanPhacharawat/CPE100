// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void preprocess(char* str){
    int index = 0;
    for(int i = 0; i < str[i]; i++){
        if(isalpha(str[i])) str[index++] = tolower(str[i]);
    }
    str[index] = '\0';
}

void bubble(char* str){
    int n = strlen(str);

    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main(void){
    char text1[100], text2[100];
    
    fgets(text1, 100, stdin); 
    fgets(text2, 100, stdin);

    preprocess(text1);
    preprocess(text2);

    bubble(text1);
    bubble(text2);

    if(strlen(text1) != strlen(text2)) printf("The strings are not anagrams");
    else {
        if(strcmp(text1, text2) == 0) printf("The strings are anagrams");
        else printf("The strings are not anagrams");
    }


    return 0;
}