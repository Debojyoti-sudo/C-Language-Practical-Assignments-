#include <stdio.h>
#include <math.h>
//x - 2*x^2 + 3*x^3 - 4*x^4 + . . . . -n*x^n.
int main() {
    int n;
    int x, result = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; ++i) {
        int term = i * pow(x, i);
        if (i % 2 == 0) {
            result -= term;
        } else {
            result += term;
        }
    }

    printf("The result of the series is: %d\n", result);

    return 0;
}
