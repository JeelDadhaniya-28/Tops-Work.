/* 8.Write a C++ program to implement a class called Student that has private member variables 
for name, class, roll number, and marks.
Include member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement using of aggregation*/

#include<iostream>
using namespace std;
class student{
    private:
        int cs,rollno,marks;
        string name;
    public:
        student(){
            cout<<"enter your name:";
            cin>>name;
            cout<<"\nenter your class:";
            cin>>cs;
            cout<<"\nenter your rollno:";
            cin>>rollno;
            cout<<"\nenter your marks:";
            cin>>marks;
        }
        void grade(){
            if(marks>=90){
                cout<<"\nA grade";
            }else if(marks<90 && marks>=75){
                cout<<"\nB grade";
            }else if(marks<75 && marks>=60){
                cout<<"\nC grade";
            }else if(marks<60 && marks>=40){
                cout<<"\nD grade";
            }else{
                cout<<"\nFail";
            }
        }
        void print(){
            cout<<"\nYour name:"<<name<<"\nYour class:"<<cs<<"\nYour rollno:"<<rollno<<"\nYour marks:"<<marks;
        }
};
int main(){

    student s1;
    s1.print();
    s1.grade();
    
    return 0;
}