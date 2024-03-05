// constructor in derived class

#include<iostream>
using namespace std;

class superClass{
    public:
        int x;

        void superClass(int a){
            x=a;
        }
        void printSuper(){
            cout<<"\nX :"<<x;
        }
};

class subClass:public superClass{

    public:
        int y;
        void subClass(int b,int a):superClass(a){
            y=b;
        }
        void printSub(){
            cout<<"\nY :"<<y;
        }

};

int main () {
    subClass obj(10,20);

    obj.printSub();
    obj.printSuper();

    return 0;

}