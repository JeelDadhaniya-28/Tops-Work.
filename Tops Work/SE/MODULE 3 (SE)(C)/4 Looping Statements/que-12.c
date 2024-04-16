// 12. Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include<math.h>
 
int main() {
    int num,num1,x=0,a,p,sum=0,b;
    printf("Enter an integer: ");
    scanf("%d", &num);

    num1=num;

    while(num != 0){
        a=num%10;
        x++;
        num=num/10;
    }

    for(int i=1; i<=x; i++){
        b=num1%10;
        p=pow(b,x);
        num1=num1/10;
        sum=sum+p;
    }

    printf(" %d ", sum);
    
    return 0;
}
