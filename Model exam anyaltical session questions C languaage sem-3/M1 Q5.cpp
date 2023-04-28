#include <stdio.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LENGTH 50
int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int num_words, i, j;
    printf("Enter the number of words: ");
    scanf("%d", &num_words);
    printf("Enter the words:\n");
    for (i = 0; i < num_words; i++) {
        scanf("%s", words[i]);
    }
    for (i = 0; i < num_words - 1; i++) {
        for (j = 0; j < num_words - i - 1; j++) {
            if (strcmp(words[j], words[j+1]) > 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
    printf("\nSorted words:\n");
    for (i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}

