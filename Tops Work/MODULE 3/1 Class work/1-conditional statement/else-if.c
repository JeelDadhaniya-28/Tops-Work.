#include <stdio.h>

int main() {
    int a,b;
    char chouse;

    printf("Enter first number:", a);
    scanf("%d", &a);

    printf("Enter second number:", b);
    scanf("%d", &b);

    printf("chouse +,-,*,/ :", chouse);
    scanf(" %c", &chouse);

    if (chouse == '+'){
        printf("%d \n", a+b);
    }else if (chouse == '-'){
        printf("%d \n", a-b);
    }else if (chouse == '*'){
        printf("%d \n", a*b);
    }else if (chouse == '/'){
        printf("%d \n", a/b);
    }else{
        printf("Wrong choice \n");
    }

    printf("Good wark!");

    return 0;
} 