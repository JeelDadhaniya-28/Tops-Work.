// 14.Perform 2D matrix array
#include <stdio.h>

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
    return 0;
}
