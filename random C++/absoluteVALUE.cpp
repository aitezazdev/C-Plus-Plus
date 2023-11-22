#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int absolute_value;
    if (number < 0) {
        absolute_value = -number;
    }
    
     else {
        absolute_value = number;
    }

    cout << "The absolute value of " << number << " is " << absolute_value;

    return 0;
}


