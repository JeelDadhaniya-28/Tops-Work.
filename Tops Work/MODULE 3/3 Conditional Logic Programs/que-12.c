// 12.WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1 num:");
    scanf("%d",&a);

    printf("Enter 2 num:");
    scanf("%d",&b);

    printf("Enter 3 num:");
    scanf("%d",&c);

    (a<b && b>c)? printf("%d is bigger.",b):
    (a<c && c>b)? printf("%d is bigger.",c) : printf("%d is bigger.",a);

    return 0;
}