// 10.Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class str {
    public:
        string s1, s2;
        str(const string& str1, const string& str2) {
            s1=str1;
            s2=str2;
        }
        void operator+() {
            cout<<"\nNew Sentence: "<<s1+s2;
        }
};

int main() {

    string s1 = "welcome";
    string s2 = " to c++ learning";
    str a(s1,s2);
    +a;
    
    return 0;
}
