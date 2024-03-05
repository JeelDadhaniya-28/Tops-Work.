// 1.Write a program of to swap the two values using template

#include<iostream>
using namespace std;

class A{
    public:
        template <class T>
        T sp(T a,T b){
            T c;
            cout<<"\nbefore swap a is:"<<a<<" and b is:"<<b;
            c=a;
            a=b;
            b=c;
            cout<<"\nafter swap a is:"<<a<<" and b is:"<<b;
        }
};
int main(){

    A obj1,obj2;
    obj1.sp(2,3);
    obj2.sp(2.2, 3.3);
    
    return 0;
}