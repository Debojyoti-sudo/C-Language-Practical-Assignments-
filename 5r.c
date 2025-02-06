#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    while (num % 2 == 0) {
        printf("%d ", 2);
        num /= 2;
    }

    for (int i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");

    return 0;
}
