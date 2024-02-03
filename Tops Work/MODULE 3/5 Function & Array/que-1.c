// 1. Write a program to find out the max number from given array using function

#include <Stdio.h>
int max(int num[3]);

int main() {
    int i, num[3];

    for(i=0; i<3; i++){
        printf("Insert %d value: ",i+1);
        scanf("%d", &num[i]);
    }
    printf("\nMax number is:-%d", max(num));
    return 0;
}

int max(int num[3]){
    int i, dup[3], temp=0;

    for(i=0; i<3; i++){
        dup[i] = num[i];

        if(temp < dup[i]){
            temp = dup[i];
        }
    }
    return temp;
}



























// int main(){
//     int i,num,x;

//     for(i=1; i<=3; i++){
//         printf("Insert number:");
//         scanf("%d", &num);
//         x=num;
//         // max(num);
//     }
//     printf("max num is :- %d", max(x));
//     return 0;;
// }

// int max(int num){
//     int i,n[3],a=0;

//     for(i=0; i<3; i++){
//         n[i]=num;

//         if(a<n[i]){
//             a=n[i];
//         }
//     }
//     return a;
// }

// int main() {
//     int i,num[3],a=0;

//     for(i=0;i<3;i++){
//         printf("Enter the number:");
//         scanf("%d", &num[i]);
//         a=num[i];
//     }

//    printf("%d", max(a));
//     return 0;
// }

// int max(int num){
//     int i,n=0,n1[3];

//     for(i=3; i!=0; i--){
//         n1[i] = num;
//         if(n < n1[i]){
//             n = n1[i];
//             n1[i] = n;
//         }
//     }
//     // printf("Max is :- %d.", n);
//     return n;
// }