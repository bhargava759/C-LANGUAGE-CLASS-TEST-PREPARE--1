#include <stdio.h>
#include <string.h>
int main() {
    char word[100], reversed_word[100];
    int length, i, j;
    printf("Enter a word: ");
    scanf("%s", word);
    length = strlen(word);
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed_word[j] = word[i];
    }
    reversed_word[length] = '\0';
    printf("The reversed word is: %s\n", reversed_word);
    return 0;
}
