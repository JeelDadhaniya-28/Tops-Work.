#include <stdio.h>

int main() {
    int i, j, space, rows;

    // Set the number of rows for the triangle
    rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print spaces before the asterisks
        for(space = 1; space <= rows - i; space++)
            printf(" ");

        // Print asterisks
        for(j = 1; j <= i; j++)
            printf("*");

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}