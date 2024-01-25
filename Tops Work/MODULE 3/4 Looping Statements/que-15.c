// 15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int sum=0,num,a=1,b;

    printf("Enter number:");
    scanf("%d", &num);

    while(a<=10){
        sum += num;
        a++;
    }
    printf("%d", b);

    return 0;
}