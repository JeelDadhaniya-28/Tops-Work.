// 8. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>

int main(){
    int i, count, j;
    char a[100];

    printf("Insert sentance:");
    gets(a);

    j=strlen(a);

    for(i=0; i<=j; i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            count++;
        }
    }
    printf("Total number of vowels is %d.", count);
    return 0;
}