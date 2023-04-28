#include <stdio.h>
int main() {
    int i, j, n, sum = 0;
    float avg;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    avg = (float) sum / (n * n);
    printf("The sum of the elements of the matrix is %d.\n", sum);
    printf("The average of the elements of the matrix is %.2f.\n", avg);
    return 0;
}

