#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
