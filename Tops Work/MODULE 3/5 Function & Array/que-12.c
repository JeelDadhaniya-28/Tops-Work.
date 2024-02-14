// 12.WAP to accept 5 students name and store it in array

#include <stdio.h>

int main() {
    int i,temp[5][5];

    
    for(i=0; i<5; i++){    
        printf("Enter here:");
        scanf("%s", &temp[i][0]);
    }

    for(i=0; i<5; i++){
        printf("%s\n", temp[i]);
    }
    return 0;
}