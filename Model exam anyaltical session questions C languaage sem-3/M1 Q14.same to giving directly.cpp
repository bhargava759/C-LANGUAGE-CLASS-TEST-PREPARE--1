#include <stdio.h>
int main() {
    int i, j, n = 3, sum = 0;
    float avg;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    avg = (float) sum / (n * n);
    printf("The sum of the elements of the matrix is %d.\n", sum);
    printf("The average of the elements of the matrix is %.2f.\n", avg);
    return 0;
}

