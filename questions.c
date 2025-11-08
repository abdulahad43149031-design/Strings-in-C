#include <stdio.h>

int length(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

void concat(char word1[], char word2[]){
    int len1 = length(word1);
    int len2 = length(word2);
    char final[len1 + len2 + 1]; // 1 for null character

    for(int i = 0; i<len1; i++){
        final[i] = word1[i];
    }

    for(int i = 0; i<len2; i++){
        final[len1 + i] = word2[i];
    }

    final[len1 + len2] = '\0';
    printf("Final string after concatanating is: %s\n", final);
}

char* reverse(char str[]){
    int left = 0;
    int right = length(str) - 1;
    
    while(right >= left){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    return str;
}

void isPalindrome(char str[]){
    int len;
    while(str[len] != '\0'){
        len++;
    }
    int left = 0;
    int right = len - 1;
    int isPali = 1; // assumption that the string is palindrome
    while(right > left){
        if(str[right] != str[left]){
            isPali = 0;
            break;
        }
        right--;
        left++;
    }
    if(isPali){ // if isPali = 1 => This means that str is a palindrome
        printf("%s is a palindromic word", str);
    }else{
        printf("%s is not a palindromic word", str);
    }
}


int main(){
    char str1[] = "Abcd";
    char str2[] = "Hello world";
}