#include <iostream>
using namespace std;
int main() {
    int n1, n2;

    // Getting input from the user
    cout << "Enter the value for n1: ";
    cin >> n1;

    cout << "Enter the value for n2: ";
    cin >> n2;

    // Swapping the values
    int temp = n1;
    n1 = n2;
    n2 = temp;

    // Displaying the swapped values
    cout << "Swapped values: n1 = " << n1 << ", n2 = " << n2 << std::endl;

    return 0;
}

