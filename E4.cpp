#include<iostream>
using namespace std;

class SavingAccount {
    private : 
    string accountHolderName ;
    int accountNumber ;
    double balance ;
    double interestRate;

    public :
    SavingAccount (string name , int accNumber , double initialBalance , double rate ){
        accountHolderName = name ;
        accountNumber = accNumber ;
        balance = initialBalance ;
        interestRate = rate ;
    }
    void deposit(double amount){
        if(amount > 0 ){
            balance += amount ;
            cout <<"Deposited: "<<amount << endl ;
        }
    } 
    void withdraw(doublr amount){
        if(amount > 0 && amount <= balance) {
            balance -= amount ;
            cout << " withdrawn : "<<amount <<endl ;
        }esle {
            cout <<"Insufficient balance!"<<endl;
        }
        void applyInterest(){
            double interest = balance * interestRate / 100 ;
            balance += interest ;
            cout << "Interest Applied : "<< interst << endl ;
        }
        void display (){
            cout << "/n[savings Account]"<<endl ;
            cout << "Account Holder: "<< accountHolderName<<endl;
            cout <<"Account Number : "<<accountNumber<<endl;
            cout <<"Balance : "<<balance <<endl;
            cout <<"Intrest Rate : "<<interestRate<<"%"<<endl;
        }
    };

    class CheckingAccount {
        private :
        string accountHolderName;
        int accountNumber;
        double balance ;
        double transactionaFee;

        public:

    }

    

}