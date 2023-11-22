/* Write a program that takes as input a given length expressed in feet and inches
Convert and output the length in centimeters*/


#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    const float CM_PER_INCH = 2.54;
    const int INCHES_PER_FOOT = 12;

    // Read in the length in feet and inches
    cout << "Enter length in feet: ";
    cin >> feet;
    cout << "Enter length in inches: ";
    cin >> inches;

    // Convert the length to inches and then to centimeters
    int totalInches = (feet * INCHES_PER_FOOT) + inches;
    float cm = totalInches * CM_PER_INCH;

    // Output the equivalent length in centimeters
    cout << "The equivalent length in centimeters is " << cm << " cm." << endl;

    return 0;
}
