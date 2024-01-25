// 34. Accept month number and display month name

#include <stdio.h>

int main() {
    int mon;

    printf("Enter month number:");
    scanf("%d", &mon);

    switch(mon){
        case 1:
        printf("January");
        break;

        case 2:
        printf("Feruaryb");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("Septembar");
        break;

        case 10:
        printf("Octombar");
        break;

        case 11:
        printf("Novembar");
        break;

        case 12:
        printf("Decambar");
        break;

        default:
        printf("Enter valid number.");
    }
}