/* 6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

#include<iostream>
using namespace std;

class person{
    private:
        string name,country;
        int age;

    public:
        void get_data(){
            cout<<"Enter your name:";
            cin>>name;

            cout<<"Enter your age:";
            cin>>age;

            cout<<"Enter your country:";
            cin>>country;
        }

        void set_data(){
            cout<<"\nName is = "<<name;
            cout<<"\nAge is = "<<age;
            cout<<"\nCountry is = "<<country;
        }
};

int main(){
    person p1;

    p1.get_data();
    p1.set_data();

    return 0;
}