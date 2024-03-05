/* 4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference. */

#include<iostream>
using namespace std;

class circle{
    private:
        int cir;

    public:
        void get_value(int a){
            cir=a;
        }

        void area(){
            cout<<"\nCircle's area = "<<3.14* cir* cir;
        }

        void circumference(){
            cout<<"\nCircle's circumference = "<<2* 3.14* cir;
        }
};

int main() {
    int radius;
    circle c1;

    cout<<"Enter radius of circle:";
    cin>>radius;

    c1.get_value(radius);
    c1.area();
    c1.circumference();

    return 0;
} 