// 33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int a;

    printf("Enter the number to find a power:");
    scanf("%d", &a);

    printf("number of power ^1 is:%d \n", a);
    printf("number of power ^2 is:%d \n", a*a);
    printf("number of power ^3 is:%d \n", a*a*a);

    return 0;
}