// 7. Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main() {
    char string[100],temp[100];

    printf("Insert string:");
    gets(string);

    strcpy(temp, string);

    printf("Copy string is:%s", temp);
    return 0;
    
}