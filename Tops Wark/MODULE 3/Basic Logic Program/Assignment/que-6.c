// 6. Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>

int main() {
    float area;
    float base;
    float hight;
    float a = 0.5;

    printf("Enter the value of base:");
    scanf("%f", &base);

    printf("Enter the value of hight:");
    scanf("%f", &hight);

    area = a *base *hight;
    printf("Area of triangle is :%.2f", area);

    return 0;
} 