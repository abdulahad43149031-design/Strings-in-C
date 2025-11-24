#include <stdio.h>

int my_length(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int myLenPtr(char* str){ // access the string pointer with the dereference operator
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}

void myStrCopy(char dest[], char src[]){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("%s", dest);
}

void myStrCpyPtr(char* dest, char* src){
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
}

void myStrCmp(char str1[], char str2[]){
    int i = 0;
    int areSame = 1;
    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            areSame = 0;
            break;
        }
        i++;
    }

    if(areSame){
        printf("The 2 strings are the same");
    }else{
        printf("The 2 strings are not the same");
    }
}

void myStrCmpPtr(char *str1, char *str2){
    int areSame = 1;
    while(*str1 != '\0' || *str2 != '\0'){
        if(*str1 != *str2){
            areSame = 0;
            break;
        }
        str1++;
        str2++;
    }

    if(areSame){
        printf("The 2 strings are the same");
    }else{
        printf("The 2 strings are not the same");
    }
}

void myReversePtr(char *str){
    char *start = str;
    char *end = str;
    while(*end != '\0'){
        end++;
    }
    end--;
    while(end > start){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Final reversed string is %s", str);
}

int main(){
    char str[] = "Hello World";
    myReversePtr(str);
}


