// 6. Find the Character Is Vowel or Not

#include <stdio.h>

int main() {
    char a;
   
    printf("enter your char:");
    scanf("%c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("character %c is vowel.", a);
    }else{
        printf("Character %c is not vowel.", a);
    }

    return 0;
}