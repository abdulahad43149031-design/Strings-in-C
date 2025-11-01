#include <stdio.h>
#include <string.h>


void approach1(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Final sorted string: %s", str);
}

void selectionSort(){
    char str[100];
    printf("Input a string: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    int min_index;
    for(int i = 0; i<len - 1; i++){
        min_index = i;
        for(int j = i+1; j<len; j++){
            if(str[j] < str[min_index]){
                min_index = j;
            }
        }
        char temp = str[i];
        str[i] = str[min_index];
        str[min_index] = temp;
    }

    printf("Final sorted string: %s", str);
}

int main(){
    approach1();
}