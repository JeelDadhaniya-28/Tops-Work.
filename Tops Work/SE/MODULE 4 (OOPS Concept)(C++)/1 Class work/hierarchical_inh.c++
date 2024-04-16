// calculate n number of square, cube and power;

#include<iostream>
// #include <bits/stdc++.h>
#include<math.h>
using namespace std;

class value{
    protected:
        int n; 
    public:
        void get_num(int num){
            n=num;
        }
};

class square:public value{
    public:
        int square_data(){
            return n*n;
        }
};

class cube:public value{
    public:
        int cube_data(){
            return n*n*n;
        }
};

class power:public value{
    public:
        int a,q;

        int pow_data(){
           cout<<"\n\nEnter power:";
           cin>>a;
           
           q=pow(n,a);
            cout<<"\nPower is="<<q;
            return q;
        }
};

int main(){
    int num;

    value v;
    square s;
    cube c;
    power p;

    cout<<"\nEnter number:";
    cin>>num;
    
    v.get_num(num);
    c.get_num(num);
    s.get_num(num);
    p.get_num(num);
    
    cout<<"\nSquare is="<<s.square_data();
    
    cout<<"\nCube is="<<c.cube_data();
   
    p.pow_data();

    return 0;
}