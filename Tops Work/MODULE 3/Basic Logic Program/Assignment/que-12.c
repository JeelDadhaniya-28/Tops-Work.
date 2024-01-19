/* 12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */

#include <stdio.h>

int main() {
    int stud;
    int apple = 5;

    printf("Enter the number of studenet:");
    scanf("%d", &stud);

    stud *=apple;

    printf("Need of apple is:%d", stud);

    return 0;
}