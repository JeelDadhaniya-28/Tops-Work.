/* 17. Write a C program to check whether a triangle can be formed with the given 
values for the angles. */

#include <stdio.h>

int main() {
    int a,b,c,t;

    printf("Enter first angle:");
    scanf("%d", &a);

    printf("Enter second angle:");
    scanf("%d", &b);

    printf("Enter third angle:");
    scanf("%d", &c);

    t=a+b+c;

    if(a == 60 && b == 60 && c == 60) {
        printf("This is triangle.");
    }else if(t == 180){
        printf("This is triangle.");
    } else {
        printf("This is not a triangle.");
    }

    return 0;
}