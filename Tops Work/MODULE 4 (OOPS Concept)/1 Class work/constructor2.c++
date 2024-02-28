// constructor  example

#include<iostream>
using namespace std;

class emp{
    public:
    int no;
    char name[100],email[100];

    emp(){
        cout<<"Enter No : ";
        cin>>no;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Email : ";
        cin>>email;
    }

    void print_data(){
        cout<<"\t"<<no<<"\t"<<name<<"\t"<<email<<"\n";
    }

};

int main () {

    emp detail1,detail2;

    detail1.print_data();
    detail2.print_data();

    return 0;

}