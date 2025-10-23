#include <stdio.h>
#include <string.h>

void printStr(){
    char name[100]; // char name[] = "" => string of len 1 and just the null character.It won't read it.
    printf("Enter a string:\n ");
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
}

void findLen(){
    char name[100];
    printf("Enter a string:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int count = 0;
    while(name[count] != '\0'){
        count++;
    }
    printf("Length of %s is %d ",name , count); 
}

void copy(){
    char src[100];
    char destination[100];
    printf("Enter the source string:\n");
    fgets(src, sizeof(src), stdin);
    int count = 0;
    while(src[count] != '\0'){
        destination[count] = src[count];
        count++;
    }

    printf("The final string is:\n%s", destination);
}

void reverseString(char src[]){;
    int rightPointer = strlen(src) - 1;
    int leftPointer = 0;
    while(rightPointer >= leftPointer){
        char temp = src[leftPointer];
        src[leftPointer] = src[rightPointer];
        src[rightPointer] = temp;
        leftPointer++;
        rightPointer--;
    }

    printf("Final rverse string is: %s", src);
}

int main(){
    findLen();
}