#include <stdio.h>

int main() {
    int n;

    printf("\nEnter your number:", &n);
    scanf("%d", &n);

    if( n %2==0 ){
        printf("%d Number is even.\n", n);
    } else {
        printf("%d Number is odd.\n", n);
    }
}