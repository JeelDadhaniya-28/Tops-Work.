#include <stdio.h>

int main() {
    
    int n,a,fact=1;
    
    printf("Enter the value : ");
    scanf("%d",&n);
    
    a=n;
    while(a>=1){
        fact=fact*a;
        a--;
    }
    
    printf("factorial of %d is %d",n,fact);

    return 0;
}