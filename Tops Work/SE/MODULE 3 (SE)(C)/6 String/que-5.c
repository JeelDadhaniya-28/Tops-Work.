// 5. Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int main() {
    char s1[5], s2[5];
    int i, temp1=0, temp2=0, temp=0;
    
    printf("Insert string 1: ");
    gets(s1);

    printf("Insert string 2: ");
    gets(s2);

    for(i=0; s1[i]!='\0'; i++){
        temp1++;
    }

    for(i=0; s2[i]!='\0'; i++){
        temp2++;
    }

    for(i=0; temp1>temp2 ? i<temp1 : i<temp2; i++){
        if(s1[i] != s2[i]){            
            temp++;
            break;
        }
    }
    
    if(temp != 0){
        printf("String are not same.");
    }else{            
        printf("String are same.");
    }
    
    return 0;
}