#include<iostream>
using namespace std;
class BankAccount{
    private:
        string ownerName;
        int accountNumber;
        double balance;
    public :
        BankAccount(){
            ownerName="Unknow";
            accountNumber=0;
            balance=0.0;
        }
        BankAccount(string name,int accNum,double bal){
            ownerName=name;
            accountNumber=accNum;
            balance=bal;
        }
        void deposit(double amount){
            balance=balance+amount;
        }
        void withdraw(double amount){
            if(amount<=balance){
                balance=balance-amount;
            }
        }
        void displayAccount() const {
            cout << "Owner Name: " << ownerName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: $" << balance << endl;
        }
};
int main(){
    BankAccount bank;
    BankAccount bank();
    bank.deposit(200);
    bank.withdraw(50);
    cout << "Account 1:" << endl;
    bank.displayAccount();

    string name;
    int num;
    double bal;
    cout<<"Enter your name : "; cin>>name;
    cout<<"Enter your Account Number : "; cin>>num;
    cout<<"Enter your balance : "; cin>>bal;
    BankAccount bank2(name,num,bal);
    bank2.deposit(300);
    bank2.withdraw(200);
    cout << "Account 2:" << endl;
    bank2.displayAccount();
    return 0;
}