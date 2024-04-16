// 2.  WAP to accept 5 numbers from user and display all numbers 

#include <stdio.h>

int main() {
    int num,a;

    for (num=1; num <=5; num++){
        printf("Enter the number:");
        scanf("%d", &a);
        printf("Number is %d \n", a);
    }

    return 0;
}