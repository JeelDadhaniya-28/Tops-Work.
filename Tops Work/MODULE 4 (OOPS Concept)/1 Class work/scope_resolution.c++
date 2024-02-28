#include<iostream>
using namespace std;

class myClass{
    public:
        void fun();
};

void myClass::fun(){
    cout<<"\nHello ward";
}

int i=28;

int main() {
    int i=19;

    cout<<"Local i:"<<i;
    cout<<"\nGlobal i:"<<::i;

    myClass m;
    m.fun();

    return 0;
}