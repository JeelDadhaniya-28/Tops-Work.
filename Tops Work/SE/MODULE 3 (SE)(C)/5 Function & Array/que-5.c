/* 5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include <stdio.h>
void asc(int a[]);
void des(int a[]);

int main(){
    int i, a[5];
    char ad;

    for(i=0; i<5; i++){
        printf("Enter 1Array %d value:", i+1);
        scanf("%d", &a[i]);
    }

    printf("Chouse one Ascending & descending (a/d):");
    scanf(" %c", &ad);

    if(ad == 'a' || ad == 'A'){
        asc(a);
    }else if(ad == 'd' || ad == 'D'){
        des(a);
    }else{
        printf("Please chouse right.");
    } 
    return 0;
}

void asc(int a[]){
    int temp,i,j;

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

void des(int a[]){
    int temp,i,j;

    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf(" %d ", a[i]);
    }   
}
