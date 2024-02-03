// intras rate wR wA;
#include <stdio.h>

float SI(float p,float r, float n);

int main() {

    printf("%f",SI(50000,10,5));

    return 0;
}

float SI(float p,float r, float n){
    
    float si;
    
    si=p*r*n/100;
    
    return si;
    
}
