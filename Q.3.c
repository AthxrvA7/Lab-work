// write a program to convert a binary to decimal using function
#include <stdio.h>

int binaryToDecimal(int binary){
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    };
    return decimal;
};

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal equivalent: %d", binaryToDecimal(binary));
    
};
