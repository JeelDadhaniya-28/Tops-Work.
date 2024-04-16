// 16.Accept 5 numbers from user and perform sum of array

#include <stdio.h>
void sum(int add[]);

int main() {
    int i, add[5];

    for(i=0; i<5; i++){
        printf("Enter number %d: ", i+1);
        scanf(" %d", &add[i]);
    }
    sum(add);

    return 0;
} 

void sum(int add[]){
    int i,temp=0;

    for(i=0; i<5; ++i){
        temp += add[i];
    }
    printf("%d", temp);

}
