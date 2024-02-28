#include<iostream>
using namespace std;

class A{
    public:
        int a;
        void funA(){
            cout<<"Function of Class A\n"<<a<<"\n";
        }
};

// single inheritance
class B:public A{
    public:
        int b;
        void funB(){
            cout<<"Function of class B\n"<<b;
        }
};

int main (){

    B objB;
    objB.a=10;
    objB.b=20;
    objB.funA();
    objB.funB();

    return 0;
}
