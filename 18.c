#include <stdio.h>
#include <math.h>
//x - (1/2)*x^2 + (1/3)*x^3) - . . . . -n*x^n.
int main() {
    int n;
    int x, result = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; ++i) {
        int term = (i/i+1) * pow(x, i);
        if (i % 2 == 0) {
            result -= term;
        } else {
            result += term;
        }
    }

    printf("The result of the series is: %d\n", result);

    return 0;
}
