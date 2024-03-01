/*Write a C++ program to implement a class called Employee that has private member variables 
for name, employee ID, and salary. Include member functions to calculate and set
salary based on employee performance. Using of constructor*/

#include<iostream>
using namespace std;

class employee{
    private:
        string name;
        int id,salary,inc;
    public:
        employee(){
            cout<<"enter name:";
            cin>>name;
            cout<<"\nenter employee id:";
            cin>>id;
            cout<<"\nenter salary:";
            cin>>salary;
            cout<<"\nhow much increment in salary(enter increment percentage):";
            cin>>inc;
        }
        void set(){
            salary=salary+((inc*salary)/100);
            cout<<"salary after "<<inc<<"% increment is:"<<salary;
        }
};

int main(){
    employee e;
    e.set();
}