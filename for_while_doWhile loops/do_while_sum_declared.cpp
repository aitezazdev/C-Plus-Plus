#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;
    int c = 7;
    int sum;

    do
    {
       sum = a + b + c;
       cout<<"sum is = "<<sum;
    } while (sum < 0);
    
return 0;
}