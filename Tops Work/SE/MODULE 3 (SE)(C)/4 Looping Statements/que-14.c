// 14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

int main() {
    
    int n;
    
    for(int i=1; i<=5; i++){
        printf("Enter the value : ");
        scanf("%d",&n);
        
        int fact=1;
        for (int a=n; a>=1; a--){
            
            fact = fact *a;                  
        }
        printf("factorial of %d is %d\n",n,fact);
    }    
    return 0;
}