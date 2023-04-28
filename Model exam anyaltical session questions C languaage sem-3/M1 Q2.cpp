#include <stdio.h>
int main() {
    int m, n, k;
    printf("Enter the starting number: ");
    scanf("%d", &m);
    printf("Enter the ending number: ");
    scanf("%d", &n);
    printf("Enter the number of values to skip: ");
    scanf("%d", &k);
    for (int i = m; i <= n; i += (k + 1)) {
        printf("%d ", i);
    }
    return 0;
}
