// 28. 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int a=1,b=2,i,n;

    printf("Inser number:");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for(i=3; i<=n; i++){
        if(i%2==1){
            a*=3;
            printf("%d ",a);
        }else{
            b*=3;
            printf("%d ",b);
        }
    }
    return 0;
}