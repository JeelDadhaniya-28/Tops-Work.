#include <stdio.h>

int main() {
    int  a=0, b=1, c, i;

    printf("enter the number:");
    scanf("%d", &i);

   for(int j=0; j<i; j++) {
    c = a + b;
    printf("%d  ", c);
    a = b;
    b = c;
   }

   printf("\n");

    int n=0;
   while(n<i){
    c = a + b;
    printf("%d  ",c);
    a = b;
    b = c;
    n++;
   }


    return 0;
}
