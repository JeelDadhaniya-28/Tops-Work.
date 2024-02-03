// 22. Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>

int main() {
    int num[3],i=0,n=0,a=0,b=0;

    while(i<3){
        printf("Insert number :");
        scanf("%d", &num[i]);

        n=num[i];
        b=0;

        while(n>0){
            a=n%10;
            b=b*10+a;
            n/=10;
        }

        if(num[i] == b){
            printf("%d is palindrome.\n",num[i]);
        }else{
            printf("%d is not palindrome.\n",num[i]);
        } 
        i++;
    }   
    return 0;
}