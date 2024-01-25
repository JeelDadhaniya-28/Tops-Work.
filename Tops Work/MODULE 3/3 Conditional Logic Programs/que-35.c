// 35. Accept the input month number and print number of days in that month. 

#include <stdio.h>

int main() {
    int m;

    printf("Enter the munth number.");
    scanf("%d", &m);

    switch(m){
        case 1:
        printf("Number of days for this month is:31");
        break;

        case 2:
        printf("Number of days for this month is:28");
        break;

        case 3:
        printf("Number of days for this month is:31");
        break;

        case 4:
        printf("Number of days for this month is:30");
        break;

        case 5:
        printf("Number of days for this month is:31");
        break;

        case 6:
        printf("Number of days for this month is:30");
        break;

        case 7:
        printf("Number of days for this month is:31");
        break;

        case 8:
        printf("Number of days for this month is:31");
        break;

        case 9:
        printf("Number of days for this month is:30");
        break;

        case 10:
        printf("Number of days for this month is:31");
        break;

        case 11:
        printf("Number of days for this month is:30");
        break;

        case 12:
        printf("Number of days for this month is:31");
        break;

        default:
        printf("Enter the carrect the number of munth");
    }
    return 0;
}