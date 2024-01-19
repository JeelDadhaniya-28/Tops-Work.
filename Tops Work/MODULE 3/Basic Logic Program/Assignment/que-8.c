// 8. Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main() {
    float area, a;

    printf ("Enter your Area:");
    scanf("%f", &a);

    area = 4 *a; 
    printf("Your circumference of Rectangle is :%.2f", area); 

    return 0;
}