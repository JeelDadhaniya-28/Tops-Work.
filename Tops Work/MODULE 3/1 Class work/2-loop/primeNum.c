#include <stdio.h>

int main() {
    int a,i;

    printf("Enter number:");
    scanf("%d", &a);

    for(i=2; i<a; i++){
          
        if(a%i == 0){
            printf("number is not prime.");
            // break;
        }else{
            printf("number is prime.");
            break;
        }
    }
    return 0;
}