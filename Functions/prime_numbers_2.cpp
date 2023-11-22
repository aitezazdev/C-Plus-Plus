#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
   for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x, y;
    cout << "Enter starting number: ";
    cin >> x;
    cout << "Enter ending number: ";
    cin >> y;

    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}