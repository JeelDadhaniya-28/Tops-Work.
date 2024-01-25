// 5. Find Area of Cube formula : a = 6a2

#include <stdio.h>

int main() {
    float area;

    printf("Enter the value of area:");
    scanf("%f", &area);

    area = 6 *(area *area);
    printf("Area of cube is :%.2f", area);

    return 0;
} 