/* 31. Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include <stdio.h>

int main() {
    int m;

    printf("Enter the munth number.");
    scanf("%d", &m);

    if(m == 2 && m < 12){
        printf("Number of days for this month is:28");
    } else if(m == 8 && m < 12){
        printf("Number of days for this month is:31");
    } else if(m%2 == 0 && m < 12){
        printf("Number of days for this month is:30");
    } else if(m%2 != 0 && m < 12){
        printf("Number of days for this month is:31");
    } else{
        printf("Enter the carrect the number of munth");
    }

    return 0;
} 