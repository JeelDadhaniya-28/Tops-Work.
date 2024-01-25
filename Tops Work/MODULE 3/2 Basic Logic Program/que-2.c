/* 2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include <stdio.h>

int main() {
    int val_1,val_2,total;
    
    printf("Enter your first number :");
    scanf("\n %d", &val_1);

    printf("Enter your second value :");
    scanf("\n %d", &val_2);

    // +
    total = val_1 + val_2;
    printf("%d \n", total);

    // -
    total = val_1 - val_2;
    printf("%d \n", total);

    // *
    total = val_1 * val_2;
    printf("%d \n", total);

    // /
    total = val_1 / val_2;
    printf("%d \n", total);

    return 0;

}