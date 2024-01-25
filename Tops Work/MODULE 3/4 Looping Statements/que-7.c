// 7.  WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main() {
    int a=64728,i,b,c,d;

    for(i=1; i<=5; i++) {
        c=a/10;
        d=c%10;
        printf("%d ", d);
        a=c;
        d=a;
        
    }
    
    return 0;
}


//  for(int j=0; j<i; j++) {
//     c = a + b;
//         printf("%d  ", c);
//         a = b;
//         b = c;
//    }