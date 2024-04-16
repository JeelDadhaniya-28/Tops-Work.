// matrix sum array

#include<stdio.h>
void add(int a[3][3], int b[3][3]);
void sub(int a[3][3], int b[3][3]);
void mul(int a[3][3], int b[3][3]);
void div(int a[3][3], int b[3][3]);

int main (){

    int i,j,a[3][3],b[3][3],c[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Value of A[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Value of B[%d][%d] : ", i, j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    printf("Array of a is:- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){            
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Array of b is:- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){            
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Sum of Array is:- \n");
    add(a, b);
    printf("\n");

    printf("Subtraction of Array is:- \n");
    sub(a, b);
    printf("\n");

    printf("Multiplication of Array is:- \n");
    mul(a, b);
    printf("\n");

    printf("Division of Array is:- \n");
    div(a, b);

    return 0;
}

void add(int a[3][3], int b[3][3]) {
    int i,j,c[3][3];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            c[i][j] = a[i][j] + b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}

void sub(int a[3][3], int b[3][3]) {
    int i,j,c[3][3];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            c[i][j] = a[i][j] - b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}

void mul(int a[3][3], int b[3][3]) {
    int i,j,c[3][3];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            c[i][j] = a[i][j] * b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}

void div(int a[3][3], int b[3][3]) {
    int i,j,c[3][3];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            c[i][j] = a[i][j] / b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}