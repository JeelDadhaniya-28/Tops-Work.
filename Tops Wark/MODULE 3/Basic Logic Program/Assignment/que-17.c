// 17.Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    int salary;

    printf("Enter the salary:");
    scanf("%d", &salary);

    salary=salary *10 /100;
    printf("Person\'s insurance premium is:%d", salary);

    return 0;
}
