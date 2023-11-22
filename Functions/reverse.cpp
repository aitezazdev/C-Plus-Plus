#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int reverseValue(int a)
{
    int reversed = 0;
    while (a > 0)
    {
        reversed = reversed * 10 + a % 10;
        a /= 10;
    }
    return reversed;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int reversed = reverseValue(x);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
