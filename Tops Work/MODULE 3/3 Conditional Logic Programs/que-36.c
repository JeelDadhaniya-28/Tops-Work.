/* 36. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 200 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional sub charge of 20% is added to the bill */

#include <stdio.h>

int main() {
    int unit;
    int a;

    printf("Enter the unit:");
    scanf("%d", &unit);

    a=(unit+50) - unit;
    printf("%d", a);
    // b=unit+

    // printf("Bill is:%.2f", a*20/100);
    return 0;
}