// 6.Write a C++ Program to show access to Private Public and Protected using Inheritance

#include<iostream>
using namespace std;

class vehicle{
    protected:
        string name;
        void get(){
            cout<<"enter vehicle name:";
            cin>>name;
        }
};
class car:public vehicle{
    private:
        string model;
    public:
        void get_model(){
            get();
            cout<<"enter car model name:";
            cin>>model;
        }
        void print(){
            cout<<"\nvehicle name is:"<<name<<"\nmodel name is:"<<model;
        }
};

int main(){

    car c;
    c.get_model();
    c.print();
    
    return 0;
}