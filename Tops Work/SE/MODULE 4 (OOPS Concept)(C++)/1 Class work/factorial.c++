#include<iostream>
using namespace std;

class fact{
    private:
        int num,temp=1;

    public:
        fact(int a){
            num = a;
        }

        int fact1(){
            int i;
            for(i=1; i<=num; i++){      
                temp = temp*i;
            }
            return temp;
        }

        void print_fact(){
            cout<<"\nfactorial is:"<<temp;
        }

};

int main(){
    int n;

    cout<<"Enter number:";
    cin>>n;

    fact f(n);

    f.fact1();
    f.print_fact();

    return 0;
}