// 3. WAP to check if the given year is a leap year or not.

#include <stdio.h>

int main() {
    int y;

    printf("Enter the year:");
    scanf("%d", &y);

    if(y%4 == 0) {
        printf("Year is leap year");
    }else{
        printf("Year is not leap year");
    }

    return 0;
}