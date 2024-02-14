// 10.WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int palindrome(int num);

int main() {
    int n,a=0;

    printf("Insert number :");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}

int palindrome(int num){
    int i,a,b=0,x=num;        

    for(i=1; num!=0; i++){        
        a=num%10;
        b=(b*10)+a;
        num/=10;
    }

    if(x == b){
        printf("%d is palindrome.\n", x);
    }else{
        printf("%d is not palindrome.\n", x);
    }

    return b;
}