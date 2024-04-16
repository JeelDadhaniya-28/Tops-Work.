#include<stdio.h>
int main (){

    int a[3]={10,25,40},i,j,k;
    float b[4];
    char c[5];

    printf("%d %d %d\n",a[0],a[1],a[2]);

    b[0]=10.5;
    b[1]=11.5;
    b[2]=12.5;
    b[3]=13.5;

    printf("%.2f %.2f %.2f\n",b[0],b[1],b[2],b[3]);

    printf("Enter 3 character : ");
    scanf(" %c",&c[0]);
    scanf(" %c",&c[1]); 
    scanf(" %c",&c[2]);
    scanf(" %c",&c[3]);
    scanf(" %c",&c[4]);
    scanf(" %c",&c[5]);
    scanf(" %c",&c[6]);
   

    // printf("Total 3 Number is : %c %c %c %c %c %c %d",c[0],c[1],c[2],c[3],c[4],c[5]);

    for(i=0;i<3;i++){
        printf("\n%d",a[i]);
    }
    for(j=0;j<4;j++){
        printf("\n%.2f",b[j]);
    }
    for(k=0;k<5;k++){
        printf("\n%c",c[k]);
    }

    return 0;

}