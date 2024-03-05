#include<iostream>
using namespace std;

class student{
    public:
    //data member
    int rollno;
    float per;
    char name[100];

    //data function
    void get_data(){
        cout<<"\nenter roll no : ";
        cin>>rollno;

        cout<<"\nenter name : ";
        cin>>name;

        cout<<"\nenter per : ";
        cin>>per;
    }
    void printdata(){
        cout<<"\nrollno : "<<rollno<<" name : "<<name<<" per : "<<per;
    }

};

int main () {

    //object
    student obj1,obj2,obj3;

    obj1.get_data();
    obj2.get_data();
    obj3.get_data();

    obj1.printdata();
    obj2.printdata();
    obj3.printdata();

    return 0;

}