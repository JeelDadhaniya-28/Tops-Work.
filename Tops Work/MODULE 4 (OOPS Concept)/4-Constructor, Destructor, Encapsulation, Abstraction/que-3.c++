/* 3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables. */

#include<iostream>
using namespace std;

class car{
    private:
        int year;
        string company,model;
    public:
        car(int y,string c,string m){
            year=y;
            company=c;
            model=m;
        }
        void set(){
            cout<<"\nyear:"<<year<<"\ncompany:"<<company<<"\nmodel:"<<model;
        }
};
int main(){
    int a;
    string b,z;

    cout<<"enter car year:";
    cin>>a;
    cout<<"enter car model:";
    cin>>b;
    cout<<"enter car company:";
    cin>>z;
    car c1(a,z,b);
    c1.set();

    return 0;
}