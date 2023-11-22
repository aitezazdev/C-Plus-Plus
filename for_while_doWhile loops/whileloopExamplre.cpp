// add five numbers when given to it

#include<iostream>
using namespace std;
int main(){

    int i = 1;
    int sum = 0;
    int x;
    while (i<6)
    {
        cout<<"Enter Number \n";
        cin>>x;
        sum = sum + x;
        i++ ;

    }
    
    cout<<"Sum is = "<<sum;
    return 0;
    }