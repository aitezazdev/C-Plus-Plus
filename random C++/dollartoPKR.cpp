#include<iostream>
using namespace  std;
int main(){

// double is for decimal values. float not used here cz double shows more precision than float
    double dollar, PKR;
    const double exchange_rate = 300.0;

// input from user
    cout<<"enter amount of dollars =  ";
    cin>> dollar;

// convert dollar to PKR
    PKR = dollar * exchange_rate;

// display the result
    cout<<"$"<<dollar<<" is equal to "<<PKR<<" Pakistani rupees \n";

    return 0;
    }


