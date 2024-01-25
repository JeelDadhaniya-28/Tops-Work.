#include <stdio.h>

int main() {
    int a,b;

    printf("\n Enter value a:");
    scanf("%d", &a);

    printf("\n Enter value b:");
    scanf("%d", &b);

    // simple if
    if(a == b){
        printf("Both are same.\n");
    }

    if(a != b){
        printf("Both are different.\n");
    } 

    // if...else
    if(a > b) {
        printf("%d is biggest \n", a);
    } else {
        printf("%d is biggest \n", b);
    }



    printf("Than You");
}