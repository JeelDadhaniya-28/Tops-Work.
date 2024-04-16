// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int i, num, a=0, b=0;

    printf("Insert number:");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        a+=i;        
    }

    printf("Ans = %d ", a);
    printf("\n");
    printf("1 ");

    for(i=1; i<num; i++){        
        b=i+1;
        printf("+ %d ", b);
    }
    
    return 0;
}