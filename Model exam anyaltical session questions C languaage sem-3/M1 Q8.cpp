#include <stdio.h>
#include <ctype.h>
int main() {
    char input[100];
    int i, alphabet_count = 0, digit_count = 0, special_count = 0;
    printf("Enter a string: ");
    fgets(input, 100, stdin);
    for(i=0; input[i]!='\0'; i++) {
        if(isalpha(input[i])) { 
            alphabet_count++;
        } else if(isdigit(input[i])) { 
            digit_count++;
        } else if(input[i] != ' ') { 
            printf("%c ", input[i]);
            special_count++;
        }
    }
    printf("\nNumber of alphabets: %d", alphabet_count);
    printf("\nNumber of digits: %d", digit_count);
    printf("\nNumber of special characters: %d", special_count);
    return 0;
}

