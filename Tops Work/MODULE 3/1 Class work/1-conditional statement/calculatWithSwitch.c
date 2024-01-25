#include <stdio.h>

int main() {
    int a, b;
    char choice;

    printf("Enter the value1:");
    scanf("%d", &a);

    printf("Enter the value2:");
    scanf("%d", &b);

    printf("chose +,-,*,/ :");
    scanf(" %c", &choice);

    switch(choice){
        case '+':
            printf("a+b=%d", a+b);
            break;

        case '-':
            printf("a-b=%d", a-b);
            break;

        case '*':
            printf("a*b=%d", a*b);
            break;

        case '/':
            printf("a/b=%d", a/b);
            break;

        default :
            printf("chose corract");                
    }

    return 0;
}