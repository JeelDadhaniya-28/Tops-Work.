// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

int main() {
    char cash;

    printf("Enter your charactor:");
    scanf("%c", &cash);

    if(cash > 64 && cash < 91) {
        printf("Upper cash.");
    } else if(cash > 96 && cash < 123) {
        printf("lover cash.");
    }else if (cash > 47 && cash < 58) {
        printf("digit.");
    } else {
        printf("spacial chracter");
    }


    return 0;
}