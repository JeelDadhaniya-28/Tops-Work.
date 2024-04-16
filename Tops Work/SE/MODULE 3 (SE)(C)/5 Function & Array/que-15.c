// 15.Store 5 numbers in array and sort it in ascending order

#include <stdio.h>
void asc(int a[]);

int main(){
    int i, a[5];

    for(i=0; i<5; i++){
        printf("Enter Array %d value:", i+1);
        scanf("%d", &a[i]);
    }
    
    asc(a);

    return 0;
}

void asc(int a[]){
    int temp,i,j;

    printf("Ascending value is:");

     for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        printf(" %d ", a[i]);
    }
}