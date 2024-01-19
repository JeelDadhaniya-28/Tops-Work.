#include <stdio.h>

int main() {
    int v1, v2, v3;

    printf ("Enter your first digit:");
    scanf("%d", &v1);

    printf ("Enter your second digit:");
    scanf("%d", &v2);

    printf ("Enter your third digit:");
    scanf("%d", &v3);

    if(v1 > v2) {
        if(v1 > v3){
            printf("%d is bigger.", v1);
        } else {
            printf("%d is bigger.", v3);
        }
    } else if (v2 > v3) {
        printf("%d is bigger.", v2);
    }else{
        printf("%d is bigger.", v3);
    } 

    return 0;
}