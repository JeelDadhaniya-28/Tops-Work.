// matrix with sum

#include<stdio.h>

int main (){

    int i,j,a[3][3],sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Value : ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("\n %d", sum);

    return 0;

}