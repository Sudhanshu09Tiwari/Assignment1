// 16.Write a C program to find sum of digits of a given number using recursion.

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d", sumDigits(num));
    return 0;
}
