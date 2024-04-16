// 14.WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1 num:");
    scanf("%d",&a);

    printf("Enter 2 num:");
    scanf("%d",&b);

    printf("Enter 3 num:");
    scanf("%d",&c);

    (a<b && b>c)? printf("%d is larger.",b):
    (a<c && c>b)? printf("%d is larger.",c) : printf("%d is larger.",a);

    return 0;
}