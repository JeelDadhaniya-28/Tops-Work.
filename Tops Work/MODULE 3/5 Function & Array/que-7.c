// 7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main(){

    char name[50];
    int length=0;

    printf("Enter Your Name : ");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        length++;
    } 
    printf("\nThe length of string is : %d",length);

    return 0;
}