// 19. Patterns:

#include <stdio.h>

// --------------------i.pattern-1.
// int main() {
//     int a;

//     printf("enter number:");
//     scanf("%d", &a);

//     for(int i=1; i<=a; i++){

//         for(int k=1; k<=i; k++){
//             if(k%2==0){
//                 printf("0 ");
//             }else{
//                 printf("1 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// --------------------ii.pattern-2.ascii
// int main() {
//     int k=65,a;

//     printf("enter number:");
//     scanf("%d", &a);

//     for(int i=1; i<=a; i++){

//         for(int j=1; j<=i; j++){
//             printf("%c ", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// --------------------iii.pattern-3.
// int main() {
//     int a,i,j,k;

//     printf("Enter the number:");
//     scanf("%d", &a);

//     for(i=1;i<=a;i++){
//         if(i%2 != 0){
//             for(k=a-i;k>=1;k--){
//                 printf(" ");
//             }
                           
//             for(j=1;j<=i;j++){ 
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }



// --------------------iv.pattern-4.
//  int main() {
//     int a,i,j,x;

//     printf("enter number:");
//     scanf("%d", &a);

//     for(i=1; i<=a; i++){
        
//         for(j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
     
//     for(x=a-1; x>=1; x--){
       
//         for(j=1; j<=x; j++){
//             printf("* ");
//         }
//         printf("\n");
//     } 
//     return 0;
// }



// --------------------v.pattern-5.
//  int main() {
//     int a,b=1;

//     printf("enter number:");
//     scanf("%d", &a);

//     for(int i=1; i<=a; i++){
        
//         for(int j=1; j<=i; j++){
//             printf("%d ", b);
//             b+=1;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// --------------------vi.pattern-6.
// int main() {
//     int k=65,a,i,j;

//     printf("enter number:");
//     scanf("%d", &a);

//     for(i=1; i<=a; i++){
       
//         for(j=1; j<=i; j++){
//             printf("%c ",j+64);
//         }
        
//         printf("\n");
//     }
//     return 0;
// }