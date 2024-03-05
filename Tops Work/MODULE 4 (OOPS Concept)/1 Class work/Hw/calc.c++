// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class calc{
    public:

    int r;
        
    void add(int x,int y){
       
        r=x+y;
        cout<<"The Addition of A + B is : "<<r;
    }

    void sub(int x,int y){
      
        r=x-y;
        cout<<"The Substraction of A - B is : "<<r;
    }

    void divi(int x,int y){
        if(y>0){
            r=x/y;
            cout<<"The Addition of A / B is : "<<r;
        }else {
            cout<<"Enter value more than 0";
        }
        
    }

    void mul(int x,int y){
        
        r=x*y;
        cout<<"The Addition of A * B is : "<<r;
    }
};

int main() {
    int a,b,c;
    calc cal;
    
    cout<<"Enter value of A : ";
    cin>>a;
    
    cout<<"Enter value of B : ";
    cin>>b;
    
    cout<<"\n1. Addition\n2. Substraction \n3. Multiplication\n4. Division\n";
    cin>>c;
    
    switch (c){
        case 1:
            cal.add(a,b);
            break;
        case 2:
            cal.sub(a,b);
            break;
        case 3:
            cal.mul(a,b);
            break;
        case 4:
            cal.divi(a,b);
            break;
        default:
            cout<<"Enter Valid Input...";
            break;
    }

    return 0;
}

