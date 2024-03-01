//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
class shape{
public:
    float h,w;
    void get(){
        cout<<"enter height:";
        cin>>h;
        cout<<"enter width:";
        cin>>w;
    }
};
class rect:public shape{
public:
    float area(){
        return h*w;
    }
};
int main(){
    rect r1;
    r1.get();
    cout<<"\narea is:"<<r1.area();
}