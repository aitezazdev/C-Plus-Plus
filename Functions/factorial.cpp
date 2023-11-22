#include<iostream>
using namespace std;

int value(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int x;
    cout<<"enter number to find factorial = ";
    cin>>x;

    if ((x >= 0) && (x <= 5))
    {
        cout<<value(x);
    }
    else{
        cout<<"-999";
    }
    return 0;
}