// 24.Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main(){
    char n[10];
    int s;

    for (n=1; n<[5]; n++) {
        printf("Enter your name :");
        scanf("%s", &n);
        printf("Enter salary :");
        scanf("%d", &s);

        for(s=1; s<5; s++){
            s += s;
            printf("%d", &s);
        }
    }
    return 0;
}