#include <stdio.h>

int main() {
    int t,a=1;

    printf("Enter tabel number:");
    scanf("%d", &t);

    while(a <= 10){
        printf("%d * %d = %d \n", t,a, t*a);
        a++;
    } 

    return 0;
} 