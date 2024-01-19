#include <stdio.h>

int main() {
    int n, a=1;

    printf("Enter number:");
    scanf("%d", &n);

    while(a <= n){
        if (a%2 == 0) {
            printf(" %d  even\n",a);
        }else{
            printf(" %d  odd\n",a);
        }
        a++;
    }
    return 0;
}