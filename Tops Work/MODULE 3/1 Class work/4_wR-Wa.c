// sum of two number
// with return type and with argument

#include <stdio.h>

int add(int a,int b);

int main() {    
    int a,b;
    
    printf("Enter value a : ");
    scanf("%d",&a);
    
    printf("Enter value a : ");
    scanf("%d",&b);
        
    printf("%d", add(a,b));

    return 0;
}

int add(int a,int b) {
    int c;
    c = a+b;
    return c;    
}