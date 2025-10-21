#include <stdio.h>
#include <string.h>

int main(){
    char str[500];
    char words[100][50];
    int frequency[100];
    int count = 0;
    char* token;

    printf("Enter the sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    token = strtok(str, " ");
    while(token != NULL){
        int found = 0;
        for(int i = 0; i<count; i++){
            if(strcmp(words[i], token) == 0){
                frequency[i]++;
                found = 1;
                break;
            }
        }

        if(!found){
            strcpy(words[count], token);
            frequency[count] = 1;
            count++;
        }

        token = strtok(NULL, " ");
    }
    printf("Printing the results: \n");
    for(int i = 0; i<count; i++){
        printf("%s -> %d\n", words[i], frequency[i]);
    }
}