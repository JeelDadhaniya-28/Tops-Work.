// 17.WAP to show difference between Structure and Union

#include <stdio.h>
struct student{
    int rollno;
    float per;
    char grade;
};

int main() {
    // struct student s[5];
    struct student s1,s2,s3;

    s1.rollno = 1;
    s1.per = 89.9;
    s1.grade = 'A';

    printf("%d  %.2f  %c", s1.rollno, s1.per, s1.grade);

    return 0;
} 