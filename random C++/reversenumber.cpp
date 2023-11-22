
#include<iostream>
using namespace std;
int main(){

    int x, digit1, digit2, digit3, y;
    cout<<"Enter number = ";
    cin>>x;

    digit1 = x%10;
    digit2 = (x/10)%10;
    digit3 = (x/100)%10;
    
    y = (digit1*100)+(digit2*10)+(digit3);

    cout<<"The reverse of "<<x<<" is = "<<y;

    return 0;
    
    }