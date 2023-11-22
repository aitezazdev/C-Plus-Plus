#include<iostream>
using namespace std;
int main()
{
    int pattern;
    int i,j;

    cout<<"enter number";
    cin>>pattern;

    for ( i = 1; i <= pattern; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}