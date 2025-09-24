#include <stdio.h>

int main(void) {
    int static num;
    printf("enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    for (int i = 2; i<=num; i++) {
        if (i == num) {
            printf("%d is a prime number\n", num);
        }
        else if (num % i == 0) {
            printf("%d is not a prime number\n", num);
            break;
        }
        else 
            continue;
    }

    int fact = 1;
    for (int i = 1; i<=num; i++) {
        fact = fact * i;
    }
    printf("factorial of %d is %d\n", num, fact);
    int j = 0;
    for (int i=1; i<=num; i++) {
        j += i;
    }
    printf("sum of first %d natural numbers is %d\n", num, j);
    int fib;
    for (int i = 0; i<=num; i++) {
        if (i == 0) {
            fib = 0;
        }
        else if (i == 1) {
            fib = 1;
        }
        else 
            fib = (i-2) + (i-1);
        
        printf("%d \n", fib);
    }
    int k;
    for (k = 0; k<=num; k++);
        if (k < 10) {
            printf("the integer is single digit\n");
        }
        else if (k < 100) {
            printf("the integer is double digit\n");
        }
        else if (k < 1000) {
            printf("the integer is triple digit\n");
        }
    
}
