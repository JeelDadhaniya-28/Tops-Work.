// 16.Convert country’s name in abbreviate form

#include <stdio.h>

int main() {
     char country[10];

    printf("Enter your country name:");
    scanf("%s", &country);

    printf("%c%c%c", country[0], country[1],  country[2]);

    return 0;
}