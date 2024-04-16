// Calculator

#include<stdio.h>

void add(); //for Addition
void sub(); //for Substraction
void mul(); //for Multiplication
void div(); //for Division

int main(){
    int menu,choice;
    start:

    printf("---------Menu---------\n");

    printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n");

    printf("\nEnter Your choice :");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            add();//call add function
            break;

        case 2:
            sub();//call sub function
            break;

        case 3:
            mul();//call mul function
            break;

        case 4:
            div();//call div function
            break;

        default:
            printf("Invalid choice!!!!");
            break;            
    }

    
    printf("\nAre you repeat this wark to press(Yes(y)/No(n)):");
    scanf(" %c", &choice);

    printf("\n");

    if(choice=='y' || choice=='Y'){
        goto start;
    }

    printf("Thank You!");

    return 0;
}

// -----Addition-----
void add(){
    int first,second;

    printf("\nEnter first number :");
    scanf("%d",&first);

    printf("Enter second number :");
    scanf("%d",&second);

    printf("\nAddition = %d", first+second);
}

// -----Substraction-----
void sub(){
    int first,second;

    printf("\nEnter first number :");
    scanf("%d",&first);

    printf("Enter second number :");
    scanf("%d",&second);

    printf("\nsubstraction = %d", first-second);
}

// -----Multiplication-----
void mul(){
    int first,second;

    printf("\nEnter first number :");
    scanf("%d",&first);

    printf("Enter second number :");
    scanf("%d",&second);

    printf("\nMultiplication = %d", first*second);
}

// -----Division-----
void div(){
    float first,second;

    printf("\nEnter first number :");
    scanf("%f",&first);

    printf("Enter second number :");
    scanf("%f",&second);

    if(second <= 0){
        printf("\nCan not divide by 0 or nagative value.\n");
    }else{
        printf("\nDivision = %.3f", first/second);
    }    
}