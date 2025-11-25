#include <stdio.h>

void isSubstr(char src[], char word[]){
    int len1 = 0, len2 = 0;
    
    while (src[len1] != '\0') len1++;
    while (word[len2] != '\0') len2++;

    for (int i = 0; i <= len1 - len2; i++) {
        int j = 0;

        while (j < len2 && src[i + j] == word[j]) {
            j++;
        }

        if (j == len2) {      
            printf("1");
            return;
        }
    }

    printf("0"); 
}

int main() {
    char src[] = "Abdul";
    char word[] = "lud";

    isSubstr(src, word);
}
