// 15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int sum=0,num,a=1;    

    while(a<=10){
        printf("Enter number %d: ", a);
        scanf("%d", &num);

        sum += num;
        a++;
    }
    printf("%d", sum);

    return 0;
}