// sum of two number
// with return type and without argument

#include <stdio.h>

int add();

int main() {
    int c;
    
    c=add();
    printf("The Answer is : %d",c);

    return 0;
}

int add() {
    int a,b,c;
    
    printf("Enter value of a : ");
    scanf("%d",&a);
    
    printf("Enter value of b : ");
    scanf("%d",&b);
    
    c=a+b;
    
    return c;
}