/* 16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>

int main() {
    int w;

    printf("Enter temperature:");
    scanf("%d", &w);

    if(w<0) {
        printf("Freezing weather.");
    }else if(w>0 && w<10){
        printf("Very cold weather.");
    }else if(w>10 && w<20){
        printf("Cold weather.");
    }else if(w>20 && w<30){
        printf("Normal in temp");
    }else if(w>30 && w<40){
        printf("Its hot");
    }else if(w>40 && w<100){
        printf("Its Very hot.");
    }else{
        printf("Enter valid temp.");
    }

    return 0;
}    