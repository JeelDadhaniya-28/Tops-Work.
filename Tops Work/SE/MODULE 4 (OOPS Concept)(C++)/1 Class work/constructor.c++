// constructor

#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Hello";
    }
    void print_msg(){
        cout<<"print msg";
    }
};

int main () {
    
    A obj1,obj2,obj3;

    obj1.print_msg();

    return 0;

}