// 23. C Program to Reverse a Number Using FOR Loop Series Program:

#include <stdio.h>

int main() {
    int a=64728;

    for(int i=1; i<=5; i++) {
        printf(" %d ", a%10);
        a=a/10;
    }
    return 0;
}