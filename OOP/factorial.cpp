#include<iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        Number(int n){
            num = n;
        }
        int factorial(int n){
            if (n == 0 || n == 1){
                return 1;
            }else{
                return n * factorial (n - 1);
            }
        }
        void factorial(){
            if ( num >= 0 && num < 6){
            int result = factorial(num);
            cout<<"Factorial is = "<<result<<endl;
            }
            else if (num < 0){
                cout<<"number is negative"<<endl;
            }
            else{
                cout<<"Factorial can't be calculated as number is greater than 6"<<endl;
            }
        }

    void Sum(){
        int TotalSum = 0;
        if ( num > 1 && num < 6){
            for (int i = 1; i <= num; i++)
        {
            TotalSum += i;
        }
            cout<<"sum is = "<<TotalSum<<endl; 
        }else{
            cout<<"Sum cannot be calculated"<<endl;
        }
    }

    void Plus(int a) const{
        if ( num > 0 && num < 6){
            int TotalPlus = num + a;
            cout<<"Plus is = "<<TotalPlus<<endl;
        }else{
            cout<<"Plus cannot be calculated"<<endl;
        }
    }
};

int main(){
    Number num1(0);
    num1.factorial();
    num1.Sum();
    num1.Plus(5);

    return 0;
}