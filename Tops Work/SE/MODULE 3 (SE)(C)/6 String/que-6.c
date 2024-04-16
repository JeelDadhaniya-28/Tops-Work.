// 6.  Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>
#include <string.h>

int main(){
    int i,j,a=0,b=0,c=0;
    char st[100];

    printf("Inser string :");
    gets(st);

    j=strlen(st);

    for(i=0; i<j; i++){
        if(st[i] >= 97 && st[i] <= 122){
            a++;
        }else if(st[i] >= 65 && st[i] <= 90){
            a++;
        }else if(st[i] >= 48 && st[i] <= 57){
            b++;
        }else if((st[i] >= 33 && st[i] <= 47) || (st[i] >= 58 && st[i] <= 64) || (st[i] >= 91 && st[i] <= 96) || (st[i] <= 123 && st[i] >= 126)){
            c++;
        }
    }
    printf("\nNumber of alphabets is = %d,\nNumber of digit is = %d,\nNumber of special characters is = %d", a,b,c);
    return 0;
}