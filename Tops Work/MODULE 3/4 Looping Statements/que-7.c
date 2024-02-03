// 7.  WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main() {
    int a=64728,b=0,c=0,x=0;

    for(int i=1; i<=5; i++) {
        printf(" %d ", a%10);
        a=a/10;
    }
    
    a=0;
    printf("\nInsert number:");
    scanf("%d", &a);

    // for(int i=a; i>0;) {
    //     b = i %10;
    //     c = c *10 +b;        
    //     i = i /10;
    //     printf(" %d ",c);
    // }

    while(a!=0){
        b = a %10;
        c = c *10 +b;        
        a = a /10;
        
    }
    printf(" %d ",c);
    
    return 0;
}

