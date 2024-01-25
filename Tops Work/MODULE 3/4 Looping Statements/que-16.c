// 16. Calculate the Sum of Natural Numbers Using the While Loop

#include <Stdio.h>

int main() {
    int num;

    printf("Enter number:");
    scanf("%d", &num);


    int i=1;
    while(i<=num){
        printf("%d ",i);
        i++;
    }

    return 0;
}