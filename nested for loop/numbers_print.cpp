#include<iostream>
using namespace std;
int main()
{

    int x=1;
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<x<<" ";
            x++;
        }
        
        cout<<endl;
    }
    return 0;
}