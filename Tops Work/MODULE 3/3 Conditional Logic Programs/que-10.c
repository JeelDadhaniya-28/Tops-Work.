// 10.WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number:");
    scanf("%d", &n);

    if(n > 0) {
        printf("%d is positive.", n);
    }else if(n < 0) {
        printf("%d is negative.", n);
    }else{
        printf("%d is 0.", n);
    }

    return 0;
}