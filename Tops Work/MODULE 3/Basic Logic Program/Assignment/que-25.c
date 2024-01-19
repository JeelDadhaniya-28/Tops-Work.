// 25.Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    printf("Enter 1 expense:");
    scanf("%d", &a);

    printf("Enter 2 expense:");
    scanf("%d", &b);

    printf("Enter 3 expense:");
    scanf("%d", &c);

    printf("Enter 4 expense:");
    scanf("%d", &d);

    printf("Enter 5 expense:");
    scanf("%d", &e);

    f= (a +b +c +d +e) / 5;
    printf("Average of expense is:%d", f);

    return 0;
}