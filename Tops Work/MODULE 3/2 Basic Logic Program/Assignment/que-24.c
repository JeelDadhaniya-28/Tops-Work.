// 24.Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main(){
    char a[10], b[10], c[10], d[10], e[10];
    int v, w, x, y, z, t;

    printf("Enter your name:");
    scanf("%s", &a[10]);
    printf("Enter your salary:");
    scanf("%d", &v);

    printf("Enter your name:");
    scanf("%s", &b[10]);
    printf("Enter your salary:");
    scanf("%d", &w);

    printf("Enter your name:");
    scanf("%s", &c[10]);
    printf("Enter your salary:");
    scanf("%d", &x);

    printf("Enter your name:");
    scanf("%s", &d[10]); 
    printf("Enter your salary:");
    scanf("%d", &y);

    printf("Enter your name:");
    scanf("%s", &e[10]);
    printf("Enter your salary:");
    scanf("%d", &z);

    t= v + w + x + y + z;
    printf("Total salary is %d and average is %d", t,t/5);
   
    return 0;
}