/* 8. WAP to accept the height of a person in centimeters and categorize the
person according to their height */

// 163 cm for women and 176.5 cm for men

#include <stdio.h>

int main() {
    float hei;

    printf("Enter your height:");
    scanf("%f", &hei);

    if(hei > 100 && hei <= 135) {
        printf("height is small.");
    } else if(hei > 135 && hei <= 185) {
        printf("height is average");
    }else if (hei > 185 && hei <= 205) {
        printf("height is hig");
    }else{
        printf("You are very small / very hig!");
    }

    return 0;
}