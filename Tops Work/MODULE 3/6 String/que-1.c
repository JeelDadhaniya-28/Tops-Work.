// 1. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
int main(){
    char name[50];
    int i,length=0;

    printf("Enter Your Name : ");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        length++;
    } 

    printf("The length is : %d\n",length);

    return 0;
}