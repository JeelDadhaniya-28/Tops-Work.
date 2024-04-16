// 9.  Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
int main() {
    int a,b,c=0;

    printf("Insert the number(under 10 digit) = ");
    scanf("%d", &a);

    for(int i=1; i<=10; i++){
        b=a%10;     
        c+=b;         
        a=a/10;
    }
    printf("Max number is = %d", c);

    return 0;
}