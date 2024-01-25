/* 3.  WAP to take 10 no. Input from user find out below values 
    a.  How many Even numbers are there
    b.  How many odd numbers are there 
    c.  Sum of even numbers 
    d.  Sum of odd numbers */

#include <stdio.h>

int main() {
    int num,a,b,x=1,y=1;

    for(int i=1; i<=10; i++){
        printf("Enter the number:");
        scanf("%d", &num);

        if(num%2 == 0){
            for(a=1; a<=i; a++) {
                printf("%d even numbers are there.\n", a);
                x+=a;
                printf("Sum of even number is:%d\n", x);
            }
        } else if (num%2 != 0){
            for(b=1; b<=i; b++){
                printf("%d odd number are there.\n", b);
                y+=b;
                printf("Sum of odd number is:%d\n", y);
            }
    }
                
    }

    return 0;
}