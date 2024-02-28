#include<iostream>
using namespace std;

class emp{
    protected:
        int e_id,salary;
        char e_name[50];

        void get_data(){
            cout<<"Enter emp id:";
            cin>>e_id;

            cout<<"Enter emp name:";
            cin>>e_name;

            cout<<"Enter salary:";
            cin>>salary;
        }
};

class s:public emp{
    private:
        int pf, pt,gs;

    public:
        void get_salary(){
            get_data();
            pf = salary * 0.1;
            pt=2500;
            gs=(salary-pf)-pt;
        }

        void print_data(){
            cout<<"\nEmp id:"<<e_id<<"\tEmp name:"<<e_name<<"\tEmp gross salary:"<<gs;
        }
};

int main(){
    s emp1;

    emp1.get_salary();
    emp1.print_data();

    return 0;
}