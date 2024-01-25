// 1. Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>

int main() {
    int a,b;

    printf("\n Enter 1 num:");
    scanf("%d", &a);

    printf("\n Enter 2 num:");
    scanf("%d", &b);

    if(a == b){
        printf("\n They are equal.");
    }else{
        printf("\n They are not equal.");
    }

    return 0;
}