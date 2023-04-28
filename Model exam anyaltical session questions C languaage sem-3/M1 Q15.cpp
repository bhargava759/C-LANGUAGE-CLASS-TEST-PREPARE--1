#include <stdio.h>
void sum(int n, int *result) {
    int i, num, total = 0;
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        total += num;
    }
    *result = total;
}
int main() {
    int n, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    sum(n, &result);
    printf("The sum of the numbers is %d\n", result);
    return 0;
}


