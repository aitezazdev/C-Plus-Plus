// #include<iostream>
// using namespace std;

// class BankAccount{
//     private:
//         int accountNumber;
//         double balance;
//         double annualInterestRate = 0.0;   
//         static int globalInterest;
//         int deposit;
//         int total;
//         int with;
//         int apply;
//     public:
//         BankAccount(int account, double  bal, double interest){
//             accountNumber = account;
//             balance = bal;
//             annualInterestRate = interest;
//             getAccountNumber();
//             getBalance();
//             getAnnualInterestRate();
//             depositAmount(200);
//             withdrawAmount(50);
//             applyInterest();
//             setGlobalInterestRate(globalInterest);
//         }
//         void getAccountNumber() const{
//            cout<<"account number is = "<< accountNumber<<endl;
//         }
//         void getBalance() const{
//             cout<<"balance is = "<< balance<<endl;
//         }
//         void getAnnualInterestRate() const{
//             cout<<"annual interest rate is = "<< annualInterestRate<<endl;
//         }
//         void depositAmount(double amount){
//             // adds amount
//             deposit = amount;
//             cout<<"deposit amount is = "<<deposit<<endl;
//             total = balance + deposit;
//             cout<<"bank banlance after deposit is = "<<total<<endl;
//         }
//         void withdrawAmount(double amount){
//             // withdraw amount
//             int withdraw = amount;
//             cout<<"withdraw amount is = "<<withdraw<<endl;
//             with = total - withdraw;
//             cout<<"bank balance after withdrawal is = "<<with<<endl;
//         }
//         void applyInterest(){
//             int interest = balance * annualInterestRate / 100;
//             cout<<"interest is = "<<interest<<endl;
//             apply = with + interest;
//             cout<<"bank balance after interest is = "<<apply<<endl;
//         }

//         static int setGlobalInterestRate(double rate){
//             globalInterest = rate;
//             cout<<"global interest is = "<<globalInterest<<endl;
//         }
// };
// int BankAccount :: globalInterest = 100;

// int main(){
//     BankAccount B1(11109111, 2000, 2.5);
// }


#include<iostream>
using namespace std;

class BankAccount{
    private:
        int nbr;
        int deposit;
        double balance;
        int total;
        int with;
        int apply;
        int interest;
        double annualInterestRate; 
        
    public:
        BankAccount(int account, double  bal, double interest){
            nbr = account;
            balance = bal;
            annualInterestRate = interest;
        }
        void getAccountNumber(){
            cout<<"account number is = "<<nbr<<endl;
        }
        void getBalance() const{
            cout<<"balance is = "<< balance<<endl;
        }
        void getAnnualInterestRate() const{
            cout<<"annual interest rate is = "<< annualInterestRate<<endl;
        }
        void depositAmount(double amount){
            // adds amount
            deposit = amount;
            cout<<"deposit amount is = "<<deposit<<endl;
            total = balance + deposit;
            cout<<"bank banlance after deposit is = "<<total<<endl;
        }
        void withdrawAmount(double amount){
            // withdraw amount
            int withdraw = amount;
            if ( withdraw < balance){
            cout<<"withdraw amount is = "<<withdraw<<endl;
            with = total - withdraw;
            cout<<"bank balance after withdrawal is = "<<with<<endl;
            }
            if ( withdraw > balance){      
            cout<<"withdraw amount is = "<<withdraw<<endl;
            cout<<"can't be withdrawed as balance is low"<<endl;
            with = 0;
            }
        }
        void applyInterest(string permission){
            if ( permission == "yes"){
                int interest = with * annualInterestRate / 100;
                cout<<"interest is = "<<interest<<endl;
                apply = with + interest;
                cout<<"bank balance after interest is = "<<apply<<endl;
            }else{
                cout<<"interest is 0 as you denied it"<<endl;
                apply = with;
                cout<<"Remaining account balance is = "<<with<<endl;
            }
        }
};

int main(){
    int accountNumber;
    int deposit;
    int withdraw;
    string permission;

    cout<<"\nEnter your Acount Number : ";
     if (!(cin >> accountNumber)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1; // Terminate the program
    }

    BankAccount B1(accountNumber, 2500, 2.5);
    B1.getAccountNumber();
    B1.getBalance();
    B1.getAnnualInterestRate();

    cout<<"\nEnter amount to deposit : ";
    if (!(cin >> deposit)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1; // Terminate the program
    }
    B1.depositAmount(deposit);

    cout<<"\nEnter amount to withdraw : ";
    if (!(cin >> withdraw)) {
        cout << "Invalid input. Please enter a number." << endl;
        return 1; // Terminate the program
    }  
    B1.withdrawAmount(withdraw);

    cout<<"\nWill you take interest? yes or no : ";
    cin>>permission;
    B1.applyInterest(permission);
}