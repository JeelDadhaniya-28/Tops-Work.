/* 18. Write a C Program to Print the Multiplication Table of N 
i. E.g.  5 * 1 = 5 
ii.  5 * 2 = 10 1. . 2. . 
iii.  5 * 10 = 50 */

#include <stdio.h>

int main() {
    int a;

    printf("Enter the tabel number:");
    scanf("%d", &a);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
} 