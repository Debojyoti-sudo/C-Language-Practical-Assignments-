#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int k= 0; k < 3; ++k) {
            scanf("%d", &matrix1[i][k]);
        }
    }

    
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int k = 0; k < 3; ++k) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix2[k][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
