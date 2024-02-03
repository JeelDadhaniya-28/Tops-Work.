// 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

int main() {
    int i, j, num, a=0,b=0;

    printf("Insert number:");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        a++;
        printf(" (%d * %d) +",a,a);

        for(j=1; j<=a; j++){
           b+=a;
        }        
    }
    printf(" = %d",b);
    return 0;
}