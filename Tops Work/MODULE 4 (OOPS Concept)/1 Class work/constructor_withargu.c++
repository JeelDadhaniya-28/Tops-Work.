// constructor with arguments

#include<iostream>
using namespace std;

class simple{
    private:
        float p,r,n,si;

    public:
        simple(float a,float b,float c){
            p=a;
            r=b;
            n=c;
        }

        void cal_si(){
            si=(p*r*n)/100;
        }

        void print_si(){
            cout<<"\n Simple Interest is : "<<si;
        }
};

int main() {

    // simple si1;

    float x,y,z;

    cout<<"Enter Principle : ";
    cin>>x;

    cout<<"Enter Rate : ";
    cin>>y;

    cout<<"Enter Duration : ";
    cin>>z;

    simple si1(x,y,z);

    si1.cal_si();
    si1.print_si();

    return 0;

}
