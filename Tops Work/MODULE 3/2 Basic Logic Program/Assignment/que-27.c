// 27.Convert days into months

#include <stdio.h>

int main() {
    float days;

    printf("Enter your days count:");
    scanf("%f", &days);
   
    printf("days into months is:%.1f", days/30);

    return 0;
}