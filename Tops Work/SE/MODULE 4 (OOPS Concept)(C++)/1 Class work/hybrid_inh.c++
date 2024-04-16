// Hybrid inheritance

#include<iostream>
using namespace std;

class A{
    public: 
        void funcA(){
            cout<<"\nClass A";
        }
};

class B:virtual public A{
    public: 
        void funcB(){
            cout<<"\nClass B";
        }
};

class C:virtual public A{
    public: 
        void funcC(){
            cout<<"\nClass C";
        }
};

class D:public B,public C{
    public: 
        void funcD(){
            cout<<"\nClass D";
        }
};

int main () {
    
    D obj;

    obj.funcA();
    obj.funcB();
    obj.funcC();
    obj.funcD();

    return 0;

}