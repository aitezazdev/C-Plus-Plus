#include<iostream>
#include<cmath>
#include<cctype>
#include<cstdlib>
using namespace std;
int main()
{
    //! pre-defined FUNCTIONS

    cout<<"2 power 3 is = "<<pow(2,3)<<endl;
    cout<<"under root 36 is = "<<sqrt(36)<<endl;

//* function call
    double  result = pow(4,2);
    cout<<"4 power 2 is = "<<result<<endl;
    double stark = sqrt(77);  
    cout<<"square root of 77 is = "<<stark<<endl;

//* converting to upperclass letter
    cout<<"uppercase a is = "<<static_cast<char>(toupper('a'))<<endl;

    double a = 2.3;
    double b = 1.2;
    cout<<a<<" to the power "<<b<<" is = "<<pow(a,b)<<endl;

    double c = a + pow(a,b);
    cout<<"C is equal to = "<<c<<endl;

//* Absolute Value
    int x = -9;
    cout<<"the absolute value of "<<x<<" is = "<<abs(x);

    return 0;
}