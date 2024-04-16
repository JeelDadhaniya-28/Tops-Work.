// 2. Write a program in C to separate individual characters from a string

#include<stdio.h>
int main(){
    char name[50];
    int i;

    printf("Enter Your Name : ");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        printf(" %c ", name[i]);
    }

    return 0;
}