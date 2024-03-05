// 1.  WAP to create simple calculator using class

#include<iostream>
using namespace std;

class calculator{
    private:
        int first,second;

    public:
        void get_data(int a, int b){
            first = a;
            second = b;
        }

        void sum(){
            cout<<"\nSum is="<<first+second;            
        }

        void sub(){
            cout<<"\nSubstraction is="<<first-second;
        }

        void mul(){
            cout<<"\nMultiplication is="<<first*second;
        }

        void div(){
            if(second <= 0){
                cout<<"\nCan not divide by 0 or nagative value.\n";
            }else{
                cout<<"\nDivision is= %.3f",(float)first/second;
            }
        }
};

int main(){
    int a,b;
    char ch,x;
    calculator c;
    start:

    cout<<"\nEnter First number:";
    cin>>a;

    cout<<"Enter Second number:";
    cin>>b;

    c.get_data(a,b);

    cout<<"\nChoose:'+','-','*','/' = ";
    cin>>ch;

    switch(ch){
        case '+':
            c.sum();
            break;

        case '-':
            c.sub();
            break;

        case '*':
            c.mul();
            break;

        case '/':
            c.div();
            break;

        default:
            cout<<"Choose correct.";                            
    }

    cout<<"\n\nAre you repeat this wark to press(Yes(y)/No(n)):";
    cin>>x;

    if(x=='y' || x=='Y'){
        goto start;
    }

    cout<<"\nThank you!";
    return 0;
}