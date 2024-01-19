// 32.Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
    int a,b;

    printf("Enter your first num:");
    scanf("%d", &a);
    printf("Enter your second num:");
    scanf("%d", &b);

    printf("Sum of two number is:%d \nsize of sum is:%d", a+b, sizeof(a+b));
    
    return 0;
}