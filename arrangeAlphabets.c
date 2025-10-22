#include <stdio.h>
#include <string.h>

int main(){
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