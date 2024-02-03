//simple interestt
//without return type and without argument

#include<stdio.h>
void SI();
void table();

int main(){

    SI();
    table();

    return 0;
}

void SI(){

    float p,r,n,si;

    printf("Enter Principle Amount : ");
    scanf("%f",&p);

    printf("Enter Rate : ");
    scanf("%f",&r);

    printf("Enter Years : ");
    scanf("%f",&n);

    si=p*r*n/100;

    printf("%.2f",si);

    return 0;
}

void table(){

    int i,j;

    printf("Enter Number : ");
    scanf("%d",&j);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d \n", j,i,j*i);
    }
    return 0;
}
