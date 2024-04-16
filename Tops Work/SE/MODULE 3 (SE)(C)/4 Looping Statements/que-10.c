// 10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit;

    printf("Insert the number: ");
    scanf("%d", &num);

    // Extracting the last digit
    lastDigit = num % 10;  

    // Finding the first digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
 
    // Calculating the sum
    int sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}