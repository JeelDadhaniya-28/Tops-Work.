/*Write a C++ program to implement a class called Bank Account that has private member variables
for account number and balance.
Include member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
class bank{
private:
    int acc_no,balance;
public:
    bank(int no,int bal){
        acc_no=no;
        balance=bal;
    }
    int deposite(int bal_d){
        balance=balance+bal_d;
        return balance;
    }
    int withdraw(int bal_w){
        if(bal_w>balance){
            cout<<"\nnot sufficient balance";
        }
        else{
            balance=balance-bal_w;
        }
        return balance;
    }
};
int main(){
    int acno,bala,amount;
    char choice;
    cout<<"enter account no:";
    cin>>acno;
    cout<<"\nenter balance:";
    cin>>bala;
    cout<<"\nenter amount:";
    cin>>amount;
    cout<<"\nenter what you want(withdraw/deposite):";
    cin>>choice;
    bank b(acno,bala);
    if(choice=='w'){
        cout<<"balance after withdraw:"<<b.withdraw(amount);
    }
    else if(choice=='d'){
        cout<<"\nbalance after deposite:"<<b.deposite(amount);
    }
    else{
        cout<<"wrong choice";
    }
}