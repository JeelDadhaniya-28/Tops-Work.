// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main() {
    float area, length, width, height;

    printf("Enter the value of length:");
    scanf("%f", &length);

    printf("Enter the value of width:");
    scanf("%f", &width);
    
    printf("Enter the value of height:");
    scanf("%f", &height);
    
    area = 2 *((width *length) + (height *length) + (height *width));
    printf("Area of rectangular prism is:%.2f", area);
    
    return 0;
} 