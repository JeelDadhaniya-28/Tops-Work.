// 30.WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int y, b;

   printf("Enter year:");
   scanf("%d", &y);
   printf("Year:%d Days:%d", y,y*365);

   printf("\nEnter days:");
   scanf("%d", &b);
   printf("Days:%d years:%d", b,b/365);
   
   return 0;
} 