// 3. WAP to find reverse of string using recursion

#include <stdio.h>
int reverce(int rev[5]);

int main() {
    int i,rev[5];

    for(i=0; i<5; i++){
        printf("Insert %d number: ", i+1);
        scanf("%d", &rev[i]);
    }
    printf(" %d ", reverce(rev));
    return 0;
}

int reverce(int rev[5]){
    int i, j, dup[5], temp=0;

    for(i=0; i<5; i++){
        dup[i] = rev[i];

        for(j=dup[i]; j>0; j--){
            printf(" %d ", dup[j]);
            temp = dup[j];
        } 
    }
    return 0;
}