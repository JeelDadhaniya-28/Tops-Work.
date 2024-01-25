#include <stdio.h>

int main(){
    int accNum;
    int balance;
    int startBalance = 10000;
    char choice;
   
    printf("\n Enter your Acc_Num :", &accNum);
    scanf("%d", &accNum);

    printf("What whoul you select, WIDROLL or DIPOSIT, press (W/D):",&choice);
    scanf(" %c", &choice);

    if(choice == 'w'){
        printf("enter your amount:");
        scanf("\n %d", &balance);

        if ( balance > startBalance) {
            printf("You widroll many uper your ballance!");
        }else{
            balance = startBalance - balance;
            printf("Now your balance:( %d )", balance);
        }

    }else if(choice == 'd'){
        printf("enter your amount:");
        scanf("\n %d", &balance);
        balance = startBalance + balance;
        printf("Now your balance:( %d )", balance);
    }else{
        printf("enter carrect charactor.");
    }

    return 0;
}