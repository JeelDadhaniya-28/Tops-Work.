#include<stdio.h>
int main(){

    char name[10];
    int i,length=0,b;

    printf("Enter Your Name : ");
    gets(name);

    for(i=0;name[i]!='\0';i++){
        length++;
    } 

    for(i=length; i>=0; i--){
        // b=length%10;
        printf(" %c ", name[i]);
        // length/=10;
    }

    printf("\nThe length is : %d",length);

    return 0;

}