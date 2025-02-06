#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }

    return 0;
}
