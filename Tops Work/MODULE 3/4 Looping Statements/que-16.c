// 16. Calculate the Sum of Natural Numbers Using the While Loop

#include <Stdio.h>

int main() {
    int num,a=0,i=1;

    printf("Enter number:");
    scanf("%d", &num);

    while(i<=num){
        a+=i;
        i++;
    }
    printf("Sum of Natural number is %d", a);
    return 0;
}