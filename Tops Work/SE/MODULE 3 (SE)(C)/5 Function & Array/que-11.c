// 11.WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>
void reverse(int num[5]);

int main() {
    int num[5];

    for(int i=0; i<5; i++){
        printf("Insert the number %d:", i+1);
        scanf("%d", &num[i]);
    }

    reverse(num);
    return 0;
}

void reverse(int num[5]){
    int a,b;

    for(int i=0; i<5; i++){
        b=0;
        while(num[i]!=0){            
            a=num[i]%10;
            b=(b*10)+a;
            num[i]/=10;
        }
        printf(" %d ", b);
    }
}