/* 5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter. */

#include<iostream>
using namespace std;

class rectangle{
    private:
        int length, width;

    public:
        void get_value(int a, int b){
            length=a;
            width=b;
        }

        void area(){
            cout<<"\nRectangle's area = "<<width * length;
        }

        void perimeter(){
            cout<<"\nRectangle's perimeter = "<<2*(width + length);
        }
};

int main() {
    int length, width;
    rectangle r1;

    cout<<"Enter the value of length:";
    cin>>length;

    cout<<"Enter the value of width:";
    cin>>width;

    r1.get_value(length, width);
    r1.area();
    r1.perimeter();

    return 0;
} 