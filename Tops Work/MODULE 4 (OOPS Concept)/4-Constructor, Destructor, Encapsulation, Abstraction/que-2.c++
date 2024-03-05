// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class cal{

    public:
        int n1,n2;
        
        cal(){
            cout<<"enter first number:";
            cin>>n1;
            cout<<"enter second number:";
            cin>>n2;
        }
        int sum(){
            return n1+n2;
        }
        int sub(){
            return n1-n2;
        }
        int mul(){
            return n1*n2;
        }
        int div(){
            return n1/n2;
        }
};
int main(){
    cal c;
    cout<<"\nsum:"<<c.sum();
    cout<<"\nsub:"<<c.sub();
    cout<<"\nmul:"<<c.mul();
    cout<<"\ndiv:"<<c.div();
    
    return 0;
}