#include<iostream>
using namespace std;

int value(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a, b;
    cout<<"enter a = ";
    cin>>a;
    cout<<"enter b = ";
    cin>>b;

    cout<<"sum of a and b is = "<<value(a,b);


    return 0;
}