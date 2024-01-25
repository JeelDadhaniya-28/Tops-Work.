/* 32. Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\  */

#include <stdio.h>

int main() {
    int s;
    printf("Enter salary:");
    scanf("%d",&s);

    if(s<=10000)
        printf("Salary: %d",s+(s*20*80/10000));
    else if(s>10000 && s<=20000){
        printf("Salary: %d",s+(s*25*90/10000));
    }else if(s>20000)
        printf("Salary: %d",s+(s*30*95/10000));
    return 0;
}