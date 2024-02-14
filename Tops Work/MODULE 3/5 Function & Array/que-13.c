// 13.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

void check(int a);

int main() {
    int a[5],i;

    for (i=0; i<5; i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d", &a[i]);        
    }

    for(i=0;i<5;i++){
        check(a[i]);
    }    
    return 0;
}

void check(int a){   
    if(a%2==0){
        printf("%d is even\n", a);
    }else {
        printf("%d is odd\n",a);
    }
}