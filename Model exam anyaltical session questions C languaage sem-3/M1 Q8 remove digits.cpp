#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char input[100], output[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    for (i = 0; i < strlen(input); i++) {
        if (!isalpha(input[i]) && !isdigit(input[i])) {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0';
    printf("Output: %s", output);
    return 0;
}
