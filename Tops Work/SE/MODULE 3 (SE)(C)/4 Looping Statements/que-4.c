// 4.  WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int a,i,j;

    printf("Enter the tabel number:");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        for(j=1;j<=10;j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
} 