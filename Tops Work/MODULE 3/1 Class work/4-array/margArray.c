#include <stdio.h>

int main() {
    int a[5],b[5],c[10],i,j;

    for(i=0;i<5;i++){
        printf("Enter number : ");
        scanf("%d", &a[i]);
        c[i]=a[i];
    }

    for(i=5;i<10;i++){
        printf("Enter number : ");
        scanf("%d", &b[i]);
        [ci]=b[i];
    }

    for(i=0;i<10;i++){
        printf(" %d ", c[i]);
    }
    return 0;
}