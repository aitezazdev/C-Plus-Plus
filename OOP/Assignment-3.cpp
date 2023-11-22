#include<iostream>
using namespace std;

class BankAccount{
    protected:
        string name;
        int AccountNbr;
        string title;
        int balance;
        int CreditBalance;
        int DebitBalance;
    public:
        BankAccount(string n, int nbr, string t, int b){
            name = n;
            AccountNbr = nbr;
            title = t;
            balance = b;
        }
        void Credit(int c){
            cout<<"Balance before credit : "<<balance<<endl;
            CreditBalance = balance + c;
            cout<<"Balance after credit : "<<CreditBalance<<endl;
        }
        void Debit(int b){
            cout<<"Balance before debit : "<<CreditBalance<<endl;
            DebitBalance = CreditBalance - b; 
        }
        void ShowBalance(){    
            cout<<"Balance after credit : "<<DebitBalance<<endl;
        }
};

class Current_Account{
    // protected:
    //     int limit = 5000;
    // public:
    //     if( limit >= 5000){

    //     }
    
};
int main(){
    
    return 0;
}