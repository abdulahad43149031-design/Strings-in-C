#include <stdio.h>
#include <string.h>

#define debug(x) fprintf(stderr, "%s = %d\n", #x, x)

char* reverse(char str[]){ // function header which takes and returns a string
    int len = strlen(str);
    int rightPointer = len - 1;
    int leftPointer = 0;
    while(rightPointer >= leftPointer){
        char temp = str[leftPointer];
        str[leftPointer] = str[rightPointer];
        str[rightPointer] = temp;
        leftPointer++;
        rightPointer--;
    }
    return str;
}

int main(){
    char src[100];
    printf("Enter a string:\n");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0';
    char copy[100];
    strcpy(copy, src);
    if(strcmp(reverse(src), copy) == 0){
        printf("%s is a palindromic string.", copy);
    }else{
        printf("%s is not a palindromic string.", copy);
    }
}