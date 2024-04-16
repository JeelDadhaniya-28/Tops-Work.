// 5. Check Number Is Positive or Negative

#include <stdio.h>

int main() {
    int num;

    printf("Enter your number:");
    scanf("%d", &num);

    if(num > 0){
        printf("number is posittive");
    }else if(num < 0){
        printf("number is negative");
    }else{
        printf("number is 0");
    }

    return 0;
}