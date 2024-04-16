//matrix form

#include<stdio.h>

int main(){

    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}},B[2][2],C[2][5],i,j;

    B[0][0]=69;
    B[0][1]=58;
    B[1][0]=98;
    B[1][1]=75;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
   

    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }



    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("Enter value : ");
            scanf("%d",&C[i][j]);
        }
    }

    printf("The Ans of Matrix is : ");
    printf("\n");

    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;

}