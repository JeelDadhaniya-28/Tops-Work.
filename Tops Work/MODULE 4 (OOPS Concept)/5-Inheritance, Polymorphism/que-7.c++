//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;
class cal{
    public:
      int a;
      cal(int x){
          a=x;
          cout<<"value of variable in grandparent class cal:"<<a;
      }
};
class sum:public cal{
public:
    sum(int b,int c):cal(c){
        cout<<"\nsum is:"<<b+c;
    }
};
class sub:public sum{
public:
    sub(int d,int e):sum(d,e){
        cout<<"\nsub is:"<<d-e;
    }
};
int main(){
    sub s1(8,3);
}