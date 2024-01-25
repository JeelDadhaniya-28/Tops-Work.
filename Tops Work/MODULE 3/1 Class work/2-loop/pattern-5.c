#include<stdio.h>
int main(){

    int i,j,k;

    for(i=5;i>=1;i--){
        for(j=5-i;j>=1;j--){
            printf(" ");
        }

        for(k=1;k<=i;k++){
            printf("*");
        }

    // for(i=5;i>=1;i--){
    //     for(j=5-i;j%2 != 0;j--){
    //         printf(" ");
    //     }

    //     for(k=1;k<=i;k++){
    //         printf("*");
    //     }

        printf("\n");
    }

}