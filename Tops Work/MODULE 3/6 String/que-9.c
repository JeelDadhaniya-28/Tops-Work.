// 9. Write a program in C to find the maximum number of characters in a string

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,count;
    char a[100],ch;

    printf("Insert sentance:");
    gets(a);

    printf("Enter your charactor:");
    scanf(" %c", &ch);
    
    j=strlen(a);

    for(i=0; i<j; i++){
        if(ch == a[i]){
            count++;
        }
    }
    printf("Maximum number of %c is: %d", ch, count);
    return 0;
}