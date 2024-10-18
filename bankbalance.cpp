/*
Author: Liban Hassan
Reg no ; BSSE-01-0068/2024
Date : 18/10/2024
*/
#include <iostream>
using namespace std;

class bankAccount{
    private:
        string accountNumber;
        double balance;
    
    public:
        bankAccount(string accNumber){
            accountNumber = accNumber;
            balance = 0.0;
        };
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
             cout<<"$" << amount << "deposited." << endl;
        } else 
            {
                cout<<"deposit amount must be positive "<<endl;
                
            }
            
    }
    void withdraw(double amount){
        if (amount > balance){
            cout<<"Insufficient funds"<<endl;
        } else{
            balance = balance - amount;
            cout<<"$"<<amount<<"withdrawn."<<endl;
        }
    }
    double getBalance(){
        return balance;
    }
};

int main() {
    bankAccount myAccount ("123456");
    
    myAccount.deposit(500);
    
    myAccount.withdraw(100);
    
    myAccount.withdraw(500);
    
    cout<<"final balance: $"<<myAccount.getBalance()<<endl;

    return 0;
}