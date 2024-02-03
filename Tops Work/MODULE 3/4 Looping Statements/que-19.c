// 19. Patterns:

#include <stdio.h>
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();

// -----------main
int main(){
    p1();

    p2();

    p3();

    p4();

    p5();

    p6();

    return 0;
}

// --------------------i.pattern-1.
void p1() {
    int a;

    printf("enter number:");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){

        for(int k=1; k<=i; k++){
            if(k%2==0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}



// --------------------ii.pattern-2.ascii
void p2() {
    int k=65,a;

    printf("enter number:");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){

        for(int j=1; j<=i; j++){
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}



// --------------------iii.pattern-3.
void p3() {
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
}



// --------------------iv.pattern-4.
 void p4() {
    int a,i,j,x;

    printf("enter number:");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
     
    for(x=a-1; x>=1; x--){
       
        for(j=1; j<=x; j++){
            printf("* ");
        }
        printf("\n");
    } 
}



// --------------------v.pattern-5.
void p5() {
    int a,b=1;

    printf("enter number:");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        
        for(int j=1; j<=i; j++){
            printf("%d ", b);
            b+=1;
        }
        printf("\n");
    }
}



// --------------------vi.pattern-6.
void p6() {
    int k=65,a,i,j;

    printf("enter number:");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
       
        for(j=1; j<=i; j++){
            printf("%c ",j+64);
        }
        
        printf("\n");
    }
}