#include <iostream>
using namespace std;
int main()
{

    int sum = 0;
    int i;
    int num;
    for (i = 1; i <= 5; i++)

    {
        cout<<"enter number = "<<i<<" : ";
        cin>>num;
        sum += num;
    }
    cout << "sum is " << sum;
}