// 18. Write a C program to calculate profit and loss on a transaction

#include <stdio.h>

int main() {
    int a,b,c,d,x;

    printf("Enter your carrant value:");
    scanf("%d", &a);
   
    printf("Enter your profit:");
    scanf("%d", &b);

    printf("Enter your loss:");
    scanf("%d", &c);
 
    x=b-c;
    printf("%d-%d=%d \n",b,c,x);
    d=a+x;
    printf("%d+%d=%d \n",a,x,d);

    if(d>a){
        printf("You are in profit.");
    }else if(d<a){
        printf("You are in loss.");
    }else{
        printf("Yiu are not in loss and profit");
    }

    return 0;
}