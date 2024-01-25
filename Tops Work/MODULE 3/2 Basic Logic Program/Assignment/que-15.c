// 15.Convert school’s name in abbreviated form

#include <stdio.h>

int main() {
    char schName[10];

    printf("Enter your school name:");
    scanf("%s", &schName);

    printf("%c%c%c", schName[0], schName[1],  schName[2]);

    return 0;
} 