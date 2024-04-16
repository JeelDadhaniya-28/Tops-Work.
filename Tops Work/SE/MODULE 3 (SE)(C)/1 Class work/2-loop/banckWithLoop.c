#include <stdio.h>

int main(){
    int accNum;
    int balance;
    int startBalance = 10000;
    char choice;
    char opt;
   
    printf("\n Enter your Acc_Num :", &accNum);
    scanf("%d", &accNum);

    printf("What whoul you select, WIDROLL or DIPOSIT, press (W/D):",&choice);
    scanf(" %c", &choice);

    do{
    if(choice == 'w'){
        printf("enter your amount:");
        scanf("\n %d", &balance);

        if ( balance > startBalance) {
            printf("You widroll many uper your ballance!");
        }else{
            balance = startBalance - balance;
            printf("Now your balance:( %d )\n", balance);
        }

    }else if(choice == 'd'){
        printf("enter your amount:");
        scanf("\n %d", &balance);
        balance = startBalance + balance;
        printf("Now your balance:( %d )\n", balance);
    }else{
        printf("enter carrect charactor.\n");
    }

    printf("Are you again this wark(y/n):");
    scanf(" %c", &opt);
    
    }while(opt == 'y');

    return 0;
}