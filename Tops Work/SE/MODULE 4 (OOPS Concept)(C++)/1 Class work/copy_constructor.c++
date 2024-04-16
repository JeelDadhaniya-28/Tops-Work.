// copy constructor

#include<iostream>
using namespace std;

class A{
    public:
        int x,y;
    A(){
        cout<<"Simple Constructor";
    }
    A(int p,int q){
        x=p;
        y=q;
    }
    A(const A &obj1){
        x=obj1.x;
        y=obj1.y;
    }
    void print(){
        cout<<""
    }
};