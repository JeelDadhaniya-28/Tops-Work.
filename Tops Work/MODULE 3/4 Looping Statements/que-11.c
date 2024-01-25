// 11. Accept 5 names from user at run time.

#include <stdio.h>

int main() {
    char nam[10];

    for(int i=1; i<=5; i++){
        printf("\nEnter  name:");
        scanf("%s", &nam);
        printf("name is %s", nam);
    }

    return 0;

}