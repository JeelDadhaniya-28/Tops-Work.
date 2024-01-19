// 3. WAP to Find Area And Circumference of Circle

#include <stdio.h>

int main() {
    float pi = 3.14;
    int r;
    float area;
    float cir;

    printf("Enter the value of radius:");
    scanf("%d", &r);

    area = pi *(r*r);
    printf("Area of circal is : %.2f \n", area);

    cir = (pi *pi) *r;
    printf("Circumference of circal is : %.2f \n", cir);

    return 0;
}