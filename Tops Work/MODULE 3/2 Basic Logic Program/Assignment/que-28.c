// 28.Convert years into days and months

#include <stdio.h>

int main() {
    int years;

    printf("Enter the year:");
    scanf("%d", &years);

    printf("Year is:%d Days is:%d \n", years, years*365);
    printf("Year is:%d month is:%d", years, years*12);

    return 0;
}