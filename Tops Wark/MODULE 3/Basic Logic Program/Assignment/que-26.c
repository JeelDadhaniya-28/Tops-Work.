// 26.Convert temperature Fahrenheit to Celsius
// celsius = (fahrenheit - 32) * 5 / 9 

#include <stdio.h>

int main() {
    float celsius, fahrenheit, a=0.55; 
   

    printf("Enter the fahrenheit value:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 0.55;
    printf("Celsius value is :%.2f", celsius);

    return 0;
}