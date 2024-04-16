#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
        char name[100];

        void get_data(){
            cout<<"Enter roll number:";
            cin>>roll;
            cout<<"\nEnter name:";
            cin>>name; 
        }    
};

class result: public student{
    private:
        double per;
    public:
        void get_per(){
            get_data();
            cout<<"\nEnter percentage:";
            cin>>per;
        }

        void print_data(){
            cout<<"\nRoll number is:"<<roll<<"\tName is:"<<name<<"\tPer is:"<<per;
        }
};

int main(){
    result obj;

    obj.get_per();
    obj.print_data();

    return 0;
}