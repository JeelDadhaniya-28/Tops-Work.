// 6.  WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main(){

int  a=0, b=1, c, i;

   printf("enter the number:");
   scanf("%d", &i);

   for(int j=0; j<i; j++) {
    c = a + b;
        printf("%d  ", c);
        a = b;
        b = c;
   }
   return 0;
} 
