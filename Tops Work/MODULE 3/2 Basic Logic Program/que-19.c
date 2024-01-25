// 19.Calculate compound interest

#include <stdio.h>

int main () {
    float a, p, n, r, t;
   
   printf("Enter the value of principal balance:");
   scanf("%f", &p);

   printf("Enter the value of interest rate:");
   scanf("%f", &r);

   printf("Enter the value number of times interest applied per time period:");
   scanf("%f", &n);

   printf("Enter the value number of time periods elapsed:");
   scanf("%f", &t);

   a = p *(1 +r /n) *t;
   printf("Compound interest is:%.2f", a);

   return 0;
}