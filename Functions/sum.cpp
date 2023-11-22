#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int value(int a,int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++) 
    {
        sum += i;
    }
    return sum;    
}

int main()
{
    int x , y;
    cout<<"enter value of x = ";
    cin>>x;
    cout<<"enter value of y = ";
    cin>>y;  
    cout<<"sum of values between "<<x<< " and "<<y<<" is = "<<value(x,y);

return 0;
}