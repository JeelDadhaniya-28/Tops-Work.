// 23.WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first digit a=");
    scanf("%d", &a);

    printf("Enter second digit b=");
    scanf("%d", &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swap a=%d \n", a);
    printf("And b=%d", b);

    return 0;
}