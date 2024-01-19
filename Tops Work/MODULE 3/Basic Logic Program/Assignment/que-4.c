// 4. Find Area of Square formula : a = a2

#include <stdio.h>

int main() {
    float area;

    printf("Enter the value of area:");
    scanf("%f", &area);

    area *= area;
    printf("Area of square is :%.2f", area);

    return 0;
} 