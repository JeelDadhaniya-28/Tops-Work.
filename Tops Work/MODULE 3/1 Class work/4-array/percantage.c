#include <stdio.h>

int main() {
    int roll_nu[5], maths[5],science[5],english[5],total;
    float per;

    for(int i=1; i<=5; i++){
        printf("Enter roll Number: ");
        scanf("%d", &roll_nu[i]);

        printf("Enter maths mark: ");
        scanf("%d", &maths[i]);

        printf("Enter science mark: ");
        scanf("%d", &science[i]);

        printf("Enter english mark: ");
        scanf("%d", &english[i]);

        total=maths[i] + science[i] + english[i];
        printf("Total marks is = %d\n", total);

        per=(float)(total * 100) / 300;
        printf("Percantage is = %.2f\n\n", per);
    } 
    return 0;
}