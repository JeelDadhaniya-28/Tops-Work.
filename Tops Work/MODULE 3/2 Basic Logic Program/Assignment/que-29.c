// 29.Convert minutes into seconds and hours

#include <stdio.h>

int main () {
    int min;

    printf("Enter minutes:");
    scanf("%d", &min);

    printf("Minutes is:%d convert to cesond is:%d \n", min,min*60);

    printf("Minutes is:%d convert to hours is:%d", min,min/60);

    return 0;
}