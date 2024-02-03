/* 5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include <stdio.h>
int asc(int a1[5], int a2[5]);
int des(int a1[5], int a2[5]);

int main(){
    int i, j, a1[5], a2[5];

    for(i=0; i<5; i++){
        printf("Enter 1Array %d value:", i+1);
        scanf("%d", &a1[i]);
    }

    for(j=0; j<5; j++){
        printf("Enter 2Array %d value:", j+1);
        scanf("%d", &a2[j]);
    }

}

int asc(int a1[5], int a2[5]){
    
}