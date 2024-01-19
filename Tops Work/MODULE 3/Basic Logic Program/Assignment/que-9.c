// 9. Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main() {
    float triangle, a, b, c;

    printf ("Enter the value of a:");
    scanf("%f", &a);

    printf("Enter the value of b:");
    scanf("%f", &b);

    printf("Enter the value of c:");
    scanf("%f", &c);

    triangle = a +b +c; 
    printf("Your circumference of Triangle is :%.2f", triangle); 

    return 0;
}