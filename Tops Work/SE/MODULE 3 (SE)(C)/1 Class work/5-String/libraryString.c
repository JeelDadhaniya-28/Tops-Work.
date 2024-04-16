#include <stdio.h>
#include <string.h>

int main(){

    char a[20],b[20];
    int len,c;

    printf("enter name : ");
    scanf(" %s",&a);

    // strcpy(a,b);
    // puts(b);

    // len=strlen(a);
    // printf("Total lengthis %d",len);

    gets( b );
    c = strcmp(a,b);
    printf("a = %d", c);

    if(a == 0){
        printf("Both aare same.");
    }else{
        printf("Both are different.");
    }

    return 0;

}