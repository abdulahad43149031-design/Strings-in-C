#include <stdio.h>
#include <string.h>

void countFrequency(){
    char sentence[100];
    char temp[20];
    char word[20];
    int occurences = 0;

    // enter statement

    printf("Enter the string:\n");
    fgets(sentence, sizeof(sentence), stdin);

    // remove trailing '\n' from sentence
    int i = 0;
    while(sentence[i] != '\0'){
        if(sentence[i] == '\n') sentence[i] = '\0';
        i++;
    }
    i = 0;
    
    // enter word

    printf("Enter the word:\n");
    fgets(word, sizeof(word), stdin);

    // remove trailing '\n' from word
    int j = 0;
    while(word[j] != '\0'){
        if(word[j] == '\n') word[j] = '\0';
        j++;
    }

    while(sentence[i] != '\0'){
        // extract word
        j = 0;
        while(sentence[i] != ' ' && sentence[i] != '\0'){
            temp[j++] = sentence[i++];
        }
        temp[j] = '\0'; // null terminate temp

        // compare temp and word manually
        int k = 0, flag = 1;
        while(temp[k] != '\0' || word[k] != '\0'){
            if(temp[k] != word[k]){
                flag = 0;
            }
            k++;
        }
        if(flag == 1){
            occurences++;
        }

        while(sentence[i] == ' ') i++; // skip spaces
    }

    printf("Number of occurences of word: %d", occurences);
}

#include <stdio.h>
#include <string.h>

void freqUsingFunction() {
    char str[100];
    char temp[20];
    char word[20];
    int occurrences = 0;

    printf("Enter the sentence:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the word:\n");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int i = 0;
    while (str[i] != '\0') {
        int j = 0;

        // Extract one word from sentence into temp
        while (str[i] != ' ' && str[i] != '\0') {
            temp[j++] = str[i++];
        }
        temp[j] = '\0';

        // Compare the extracted word with target
        if (strcmp(temp, word) == 0) {
            occurrences++;
        }

        // Skip extra spaces
        while (str[i] == ' ') i++;
    }

    printf("Number of occurrences: %d\n", occurrences);
}

int main(){
    freqUsingFunction();
}