// 13.WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1 num:");
    scanf("%d",&a);

    printf("Enter 2 num:");
    scanf("%d",&b);

    printf("Enter 3 num:");
    scanf("%d",&c);

    (a>b && b<c)? printf("%d is small.",b):
    (a>c && c<b)? printf("%d is small.",c) : printf("%d is small.",a);

    return 0;
}