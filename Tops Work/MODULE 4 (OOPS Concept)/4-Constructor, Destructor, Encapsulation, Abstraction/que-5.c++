/*Write a C++ program to create a class called Triangle that has private member variables.
for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
class triangle{
private:
    float a,b,c;
public:
    triangle(float t1,float t2,float t3){
        a=t1;
        b=t2;
        c=t3;
    }
    void check(){
        if(a==b && b==c){
            cout<<"triangle is equilateral";
        }
        else if(a==b || b==c || a==c){
            cout<<"triangle is isoscelese";
        }
        else{
            cout<<"triangle is scalene";
        }
    }
};
int main(){
    float x,y,z;
    cout<<"enter first side of triangle:";
    cin>>x;
    cout<<"enter second side of triangle:";
    cin>>y;
    cout<<"enter third side of triangle:";
    cin>>z;
    triangle t(x,y,z);
    t.check();
}