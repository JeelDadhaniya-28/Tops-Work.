#include <stdio.h>

int main() {
    float per;

    printf("Enter your percantage :", per);
    scanf("%f", &per);

    if(per >= 80 && per <= 100){
        printf("Distiction.");
    } else if (per >= 70 && per <= 80){
        printf("First class.");
    } else if (per >= 60 && per <= 70){
        printf("Second class");
    } else if (per >= 35 && per <= 60){
        printf("Pass class");
    }else{
        printf("Fail");
    }

    return 0;
}