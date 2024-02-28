/*  2.Define a class to represent a bank account. Include the following members: 
3.Data Member: 
  -Name of the depositor 
  -Account Number 
  -Type of Account 
  -Balance amount in the account  

Member Functions 
 -To assign values
 -To deposited an amount 
 -To withdraw an amount after checking balance 
 -To display name and balance */

#include<iostream>
using namespace std;
 
class bank{
    private:
        int ac_num,balance;
        string name;
        char type_ac;

    public:
    bank(){        
        cout<<"Enter your name:";
        cin>>name;

        cout<<"Enter account number:";
        cin>>ac_num;

        cout<<"Which type of your account(Saving(s)/Current(c)):";
        cin>>type_ac;

        cout<<"Enter your current balance:";
        cin>>balance;        
    }
    
        void deposited(int dep){
            cout<<"\nYour name is:"<<name;
            cout<<"\nYour total amount is:"<<balance + dep;
        }

        void withdraw(int wit){
            cout<<"\nYour name is:"<<name;
            if(wit < balance)
                cout<<"\nAfter withdraw, Yout total amount is:"<<balance - wit;
            else
                cout<<"\nYour withdraw value is bigger then balance.";
        }
};

int main(){
    int d;
    char a;
    bank b1;

    cout<<"\nWhat wod you like(Deposited(D)/Withdraw(W)):";
    cin>>a;

    cout<<"Enter your amount:";
    cin>>d;

    if(a == 'd' || a == 'D'){
        b1.deposited(d);
    }else if(a == 'w' || a == 'W'){
        b1.withdraw(d);
    }else{
        cout<<"Correct choice.";
    }

    return 0;
}