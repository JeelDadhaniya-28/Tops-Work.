// matrix sum array

#include<stdio.h>

int main (){

    int i,j,a[3][3],b[3][3],c[3][3],sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Value of A : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Value of B : ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}