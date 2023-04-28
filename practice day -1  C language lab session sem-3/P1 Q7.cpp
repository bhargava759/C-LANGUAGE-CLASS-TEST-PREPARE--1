#include <stdio.h>
int add(int a, int b, int *sum);
int main() {
    int x = 5, y = 3, result;
    add(x, y, &result);
    printf("The sum of %d and %d is %d", x, y, result);
    return 0;
}
int add(int a, int b, int *sum) {
    *sum = a + b; 
    return 0;
}

