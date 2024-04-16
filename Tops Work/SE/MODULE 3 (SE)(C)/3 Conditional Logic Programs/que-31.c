/* 31. Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include <stdio.h>

int main() {
    int m;

    printf("Enter the munth number.");
    scanf("%d", &m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        printf("Number of days for this month is:31");
    } else if(m==4 || m==6 || m==9 || m==11){
        printf("Number of days for this month is:30");
    } else if(m==2){
        printf("Number of days for this month is:28/29");
    } else{
        printf("Enter the carrect the number of munth");
    }

    return 0;
} 