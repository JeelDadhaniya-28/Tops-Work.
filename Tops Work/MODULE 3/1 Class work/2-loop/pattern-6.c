#include <stdio.h>

 int main() {
    int a,i,j,k;

    printf("Enter the number:");
    scanf("%d", &a);


    for(i=1;i<=a;i++){
        if(i%2 != 0){
            for(k=a-i;k>=1;k--){
                printf(" ");
            }
                           
            for(j=1;j<=i;j++){ 
                printf("* ");
            }
            printf("\n");
        }
    }
   
    return 0;
}