/* 3.  WAP to take 10 no. Input from user find out below values 
    a.  How many Even numbers are there
    b.  How many odd numbers are there 
    c.  Sum of even numbers 
    d.  Sum of odd numbers */

#include <stdio.h>

int main() {
    int n[10], i, e=0, o=0, es=0, os=0;

    for(int i=1; i<=10; i++){
        printf("Enter the number:");
        scanf("%d", &n[i]);

        if(n[i]%2==0){
            e++;
            es+=n[i];
        } else {
            o++;
            os+=n[i];
        }                
    }
    printf("Total Even num is : %d\n", e);
    printf("Total sum of Even num is : %d\n", es);
    printf("Total Odd num is : %d\n", o);
    printf("Total sum of Odd num is : %d\n\n", os);

    return 0;
}