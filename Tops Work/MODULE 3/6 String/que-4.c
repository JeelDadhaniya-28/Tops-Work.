// 4. Write a program in C to count the total number of words in a string

#include <stdio.h>

int main() {
    char Ch[50],a;
    int i,length=0,b=0;

    printf("Enter hear:");
    gets(Ch);

    printf("Insert your charactor to find:");
    scanf(" %c", &a);

    for(i=0;Ch[i] != '\0'; i++){
        if(Ch[i] == a){
            b++;
        }
    }
    printf(" %c repeated time is : %d ", a,b);
    return 0;
}