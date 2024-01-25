//simple interest and table

#include<stdio.h>

void si(int p,int r,int n,float si);

void table(int j);

  
int main(){
 
    table(11);

    si(1000,10,2,0);

    return 0;

}

void si(int p,int r,int n,float si){

    printf("simple interest is : %.2f",si=p*r*n/100); 

}

void table(int j){
    int i;
    for(i=1;i<=10;i++){
        printf("%d * %d = %d \n", j,i,j*i);
    }
}