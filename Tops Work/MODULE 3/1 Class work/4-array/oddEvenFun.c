#include <stdio.h>

void check(int a);

int main() {
    int a[10],i;

    for (i=0; i<10; i++){
        printf("Enter the number: ");
        scanf("%d", &a[i]);
        
    }

    for(i=0;i<10;i++){
        check(a[i]);
    }
    
    return 0;
}

void check(int a){   
        if(a%2==0){
            printf("%d is even\n", a);
        }else {
            printf("%d is odd\n",a);
        }
}