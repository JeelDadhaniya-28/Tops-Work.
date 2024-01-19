/* 4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */

#include <stdio.h>

int main() {
    int a,b;
    char cal;

    printf("Enter the firsh number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Select \'+\', \'-\', \'*\', \'/\', \'modulo\' ");
    scanf(" %c", &cal);

    switch(cal){
        case '+':
            printf("addition is:%d", a+b);
            break;

        case '-':
            printf("subtraction is:%d", a-b);
            break;

        case '*':
            printf("multiplication is:%d", a*b);
            break;

        case '/':
            printf("division is:%d", a/b);
            break;

        case '%':
            printf("modulo is:%d", a%b);
            break;

        default:
            printf("chous corract");    
    }

    return 0;
}