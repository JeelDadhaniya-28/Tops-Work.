// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class bank{
    private:
        int ac_no,balance;
        char type;
        
    public:
        void open_ac(){
            cout<<"Enter Account Number :  ";
            cin>>ac_no;
            cout<<"Enter Your Current Balance : ";
            cin>>balance;
            cout<<"Enter Your Account type : ";
            cin>>type;
        }
        
        void deposit(){
            int amount;
            cout<<"Enter Amount you want to deposit : ";
            cin>>amount;
            balance=balance+amount;
        }
        
        void withdraw(){
            int amount;
            cout<<"Enter Amount you want to deposit : ";
            cin>>amount;
            if(balance>amount){
                balance=balance-amount;
            } else {
                cout<<"You are not able to withdraw money more than your balance";
            }
        }
        
        void print_data(){
            cout<<"Your Bank Account Number is : "<<ac_no<<" Your Balance is : "<<balance;
        }
};

int main() {
    
    char choice;
    
    bank account;
    
    account.open_ac();
    
    cout<<"Deposit Money : D\nWithdraw Money : W\n";
    cin>> choice;
    
    if(choice=='d' || choice=='D'){
        account.deposit();
        account.print_data();
    } else if(choice=='w' || choice=='W'){
        account.withdraw();
        account.print_data();
    } else {
        cout<<"Enter Valid Input...";
    }
    
    return 0;
}