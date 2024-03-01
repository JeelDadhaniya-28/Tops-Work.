//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class matrix{
public:
    int a[5],b[5],c[5],i;
    matrix(int x[5],int y[5]){
        for(i=0;i<5;i++){
            a[i]=x[i];
            b[i]=y[i];
        }
    }
    void operator+(){
        for(i=0;i<5;i++){
             c[i]=a[i]+ b[i];
        }
    }
    void print(){
        for(i=0;i<5;i++){
            cout<<" "<<c[i];
        }
    }
};
int main(){
    int d[5]={1,2,3,4,5};
    int e[5]={1,2,3,4,5};
    matrix m(d,e);
    +m;
    m.print();
}