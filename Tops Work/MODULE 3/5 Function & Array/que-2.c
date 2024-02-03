// 2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main() {
    int a,b;
    char cal,c;
    start:
    
    // do{
        printf("Input 1st number:");
        scanf("%d", &a);

        printf("Input 2nd number:");
        scanf("%d", &b);

        printf("Enter +,-,*,/ :");
        scanf(" %c", &cal);
    
        switch(cal){
            case '+':
                printf("%d", add(a,b));
                break;

            case '-':
                printf("%d", sub(a,b));
                break;

            case '*':
                printf("%d", mul(a,b));
                break;

            case '/':
                printf("%.2f", div(a,b));
                break;

            default :
                printf("Enter correct char.");
                break;
        }

        printf("\nAre you repeat this wark to press(Y/N):");
        scanf(" %c", &c);

    // }while( c == 'y' || c == 'Y');

    if(c=='y' || c=='Y'){
        goto start;
    }
    
    printf("Thank you! Have a nice day.");

    return 0;
}

int add(int a, int b) {
    int x;
    x=a+b;
    return x;
}

int sub(int a, int b) {
    int x;
    x=a-b;
    return x;
}

int mul(int a, int b) {
    int x;
    x=a*b;
    return x;
}

float div(int a, int b) {
    float x;
    x=(float)a/b;
    return x;
}