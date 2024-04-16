// 4. WAP to find factorial using recursion

#include <stdio.h>
int fact(int num);

int main(){
    int num;

    printf("insert number: ");
    scanf("%d", &num);

    printf("Factorial of %d is = %d", num, fact(num));

    return 0;
}

int fact(int num){
    if (num == 0 || num == 1) {
        return 1; 
    } else {
        return num * fact(num - 1); // Recursively calculate factorial
    }
}

