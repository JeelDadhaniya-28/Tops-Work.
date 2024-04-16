// 9. WAP to show difference between Structure and Union.

#include <stdio.h>
struct student{
    int rollno;
    float per;
    char grade;
}s[5];

int main() {
    int i;

    for(i=0; i<5; i++){
        printf("rollno: ");
        scanf("%d", &s[i].rollno);
        printf("per: ");
        scanf("%f", &s[i].per);
        printf("grade: ");
        scanf(" %c", &s[i].grade);
        printf("\n");    
    } 

    for(i=0; i<5; i++){
        printf("\n %d  %f  %c",s[i].rollno, s[i].per, s[i].grade);
    }
}