// Phacharawat Eakgawatphokhin
// 67070503426

#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    scanf("%s", n);

    int left = 0, right = strlen(n) - 1;
    int isMatch = 1;

    if(n[0] == '-'){
        printf("Negative value is not considered a palindrome.");
        return 0;
    }

    while(left < right){
        if(n[left] != n[right]){
            isMatch = 0;
            break;
        }
        left++;
        right--;
    }

    if(isMatch) 
        printf("%s is a palindrome.", n); 
    else 
        printf("%s is not a palindrome.", n); 

    return 0;
}
