#include <stdio.h>

int main() {
    int  a=0, b=1, c, i;

    printf("enter the number:");
    scanf("%d", &i);

   for(int j=0; j<i; j++) {
    printf("%d  ", a);
    c = a + b;
    a = b;
    b = c;
   }

   printf("\n");

    int n=0;
   while(n<i){
    printf("%d  ",a);
    c = a + b;
    a = b;
    b = c;
    n++;
   }


    return 0;
}
