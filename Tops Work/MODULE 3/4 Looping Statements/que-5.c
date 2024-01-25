// 5.  WAP to print factorial of given number 

#include <stdio.h>

int main() {
    
    int n,a,fact=1;
    
    printf("Enter the value : ");
    scanf("%d",&n);

    for(a=n; a>1; a--){
        fact=fact*a;
    }
    printf("factorial of %d is %d. \n",n,fact);

    return 0;
}