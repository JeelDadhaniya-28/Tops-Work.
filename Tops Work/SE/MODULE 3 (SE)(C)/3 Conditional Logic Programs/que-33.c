// 33. WAP to input the week number and print week day.

#include <stdio.h>

int main() {
    int day;

    printf("Enter the number:");
    scanf("%d", &day);

    switch(day){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thuesday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Enter valid number.");
    }

    return 0;
}