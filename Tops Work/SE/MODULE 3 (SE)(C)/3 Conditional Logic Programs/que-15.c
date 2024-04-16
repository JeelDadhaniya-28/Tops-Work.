/* 15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include <stdio.h>

int main() {
    int m,p,c,t,tpm;

    printf("Enter the mark off maths:");
    scanf("%d", &m);

    printf("Enter the mark off phy:");
    scanf("%d", &p);

    printf("Enter the mark off che:");
    scanf("%d", &c);

    t = m + p + c;
    printf("Total marks is:%d\n",t);

    tpm = m + p;
    printf("Total of maths and phy is:%d \n", tpm);

    if(m > 100 || p > 100 || c > 100 || t > 300 || tpm > 200){
        printf("Enter corract  number.\n");
    }else if(m >= 65 && p >= 55 && c >= 50 && t >= 190 && tpm >= 140 ){
        printf("The candidate is eligible.\n");
    }else {
        printf("The candidate is not eligible.");
    }

    return 0;
}