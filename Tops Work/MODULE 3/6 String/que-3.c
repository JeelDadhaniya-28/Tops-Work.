// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
int main(){
    char name[50];
    int i,length=0;

    printf("Enter Your Name : ");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        length++;
    } 

    for(i=length; i>=0; i--){
        printf(" %c ", name[i]);
    }

    return 0;
}