// write a program to calculate the factorial of a input number using functions

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    if (n == 0) {
        return 1;
    }
    else
        for (int i = 1; i <= n; i++) {
            fact *= i;
        };
        return fact;
};

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
};
