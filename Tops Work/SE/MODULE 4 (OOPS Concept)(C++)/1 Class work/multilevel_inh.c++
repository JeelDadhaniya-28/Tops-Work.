//multilevel inheritance

#include<iostream>
using namespace std;

class student{

    public:
        int rollno,maths,sci,eng;
        string name;

        void get_sub_marks(int a,int b,int c,int d,string e){
            rollno=a;
            maths=b;
            sci=c;
            eng=d;
            name=e;
        }

};

class activity:public student{

    public:
        int sports,music;

        void get_act_marks(int a,int b){
            sports=a;
            music=b;
        }

};

class result:public activity{
    private:
        int total;
    public:
        void cal_total(){
            total=sci+maths+eng+sports+music;
        }
        void print_result(){
            cout<<"rollno :"<<rollno<<" name :"<<name<<" total :"<<total;
        }
    
};

int main () {
    result r1;

    r1.get_sub_marks(1, 80, 75, 92,"Jeel");
    r1.get_act_marks(45,78);
    r1.cal_total();
    r1.print_result();

    return 0;

}