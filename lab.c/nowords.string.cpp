#include <stdio.h>
int countWords(char* str) {
    int count = 0;
    int inWord = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (inWord) {
                count++;
                inWord = 0; 
            }
        } else {
            inWord = 1; 
        }
    }
    if (inWord) {
        count++;
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);
    return 0;
}

