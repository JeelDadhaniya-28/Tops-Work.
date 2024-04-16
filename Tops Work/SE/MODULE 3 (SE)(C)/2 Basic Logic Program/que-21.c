/* 21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

#include <stdio.h>

int main() {
    int a, b, c;

    // with 3rd variable
    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    printf("after swaping with 3rd var a=%d\n",a);
    printf("after swaping with 3rd var b=%d\n",b);

    // without 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swaping without 3rd var a=%d\n",a);
    printf("after swaping without 3rd var b=%d",b);
  
    return 0;
}