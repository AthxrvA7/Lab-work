#include <stdio.h>

int fact();
int fib();
int prime();
int revstr();
int gcd();

int main(void) {
    printf("enter a number: ");
    int n;
    scanf("%d", &n);
    printf("factorial of %d is %d\n", n, fact(n));
    printf("fibonacci of %d is %d\n", n, fib(n));
    if (prime(n) == 1) {
        printf("%d is a prime number\n", n);
    }
    else
        printf("%d is not a prime number\n", n);
    
    printf("enter a string: ");
    char str[100];
    scanf("%s", str);
    revstr(str);
    printf("\n");
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The gcd of %d and %d is %d\n", a, b, gcd(a, b));
};



int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
};

int fib(int n) {
    if (n == 1) {
       return 0; 
    }
    else if (n == 2) {
        return 1;
    }
    else
        return fib(n - 1) + fib(n - 2);  
};

int prime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
           return 0;
           break;
        }
        else
            return 1;
    };
};

int revstr(char *str) {
    if (*str)
        revstr(str+1); 
    printf("%c", *str);
};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
};
