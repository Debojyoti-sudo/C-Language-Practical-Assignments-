#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; ++i) {
        sum += matrix[i][i]; 
        if (i != 3 - i - 1) { 
            sum += matrix[i][3 - i - 1]; 
        }
    }

    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}
