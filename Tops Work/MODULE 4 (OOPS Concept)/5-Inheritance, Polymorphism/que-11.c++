/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth Triangle: � *Area* breadth Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;
class cal{
public:
    float area(float w,float h,bool isTriangle=true){
        if(isTriangle){
            return 0.5*w*h;
        }
        else{
            return w*h;
        }
    }
    float area(float r){
        return 3.14*r*r;
    }
};
int main(){
    cal c;
    cout<<c.area(3.3,4,true)<<endl;
    cout<<c.area(4,5.4,false)<<endl;
    cout<<c.area(3)<<endl;
}