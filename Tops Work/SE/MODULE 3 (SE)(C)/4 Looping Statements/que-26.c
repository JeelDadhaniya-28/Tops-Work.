// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
    int i,num,sum=0,tsum=0;

    printf("Insert number:");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        sum+=i;
        tsum+=sum;
    }
    printf(" %d ", tsum);
    return 0;
}