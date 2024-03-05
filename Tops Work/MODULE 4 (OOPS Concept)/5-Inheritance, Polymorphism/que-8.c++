/*Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two 
number using different parameters and Function Overloading */

#include<iostream>
using namespace std;

class cal{
    public:
        int math(int a,int b,int c){
            return a+b+c;
        }
        float math(float a,float b){
            return a-b;
        }
        double math(double a,double b){
            return a*b;
        }
        int math(int a,int b){
            return a/b;
        }
};

int main(){

    cal c;
    cout<<c.math(1,2,3)<<endl;
    cout<<c.math(7.6,3.3)<<endl;
    cout<<c.math(6.2,5.3)<<endl;
    cout<<c.math(9,3)<<endl;
    
    return 0;
}