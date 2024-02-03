// 8.  Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 

#include <stdio.h>

int main() {
    int a,b,c=0;

    printf("Insert the number(under 10 digit) = ");
    scanf("%d", &a);

    for(int i=1; i<=10; i++){
        b=a%10;
        if(c<b){
            c=b;            
        }
        a=a/10;
    }
    printf("Max number is = %d", c);
    return 0;
}