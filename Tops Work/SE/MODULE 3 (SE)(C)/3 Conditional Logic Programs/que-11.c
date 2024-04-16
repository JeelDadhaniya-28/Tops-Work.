// 11.WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main() {
    int n;

    printf("enter the number:");
    scanf("%d", &n);
    (n%2 == 0) ? printf("%d number is even.",n) : printf("%d nummber is odd",n);
   
    return 0;
}