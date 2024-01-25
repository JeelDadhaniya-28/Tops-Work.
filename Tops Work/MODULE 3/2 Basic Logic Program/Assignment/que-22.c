/* 22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t; (p = principal balance, r = interest rate, t = number of time periods).
b. Compound Interest = Amount – P */


#include <stdio.h>

int main() {
    float amout, comi;
    float r, t, p ;

    printf("Enter your principal balance:");
    scanf("%f", &p);

    printf("Enter your interest rate:");
    scanf("%f", &r);

    printf("Enter your time period:");
    scanf("%f", &t);

    amout = p *(1 + r/100) *t ;
    comi = amout - p ;
    printf("Compound Interest is:%.2f", comi);

    return 0;
}