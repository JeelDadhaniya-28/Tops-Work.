// 7. Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main() {
    float area, width, length;

    printf ("Enter your Width:");
    scanf("%f", &width);

    printf("Enter your Length:");
    scanf("%f", &length);

    area = width *length; 
    printf("\nYour area of Rectangle is :%.2f", area ); 

    return 0;
}