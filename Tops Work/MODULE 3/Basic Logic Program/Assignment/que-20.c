/*20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include <stdio.h>

int main() {
    int salary;
 
    printf("Enter the amout of salary:");
    scanf("%d", &salary);

    salary = salary - (salary / 10);
    printf("after apply insurance premium, salary is:%d \n", salary);

    salary = salary - (salary / 10);
    printf("after apply loan installment, salary is:%d",salary);

    return 0; 
}