#include <stdio.h>

int main() {
    char name[10],n[10];

    printf("Enter name:");
    scanf("%s", &name);
    printf("Entering is : %s", name);

    printf("\n");

    printf("Enter name:");
    gets(n);
    printf("Entering name is : %s", puts(n));
    
    return 0;
}