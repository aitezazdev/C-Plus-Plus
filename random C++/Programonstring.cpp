#include <iostream>
#include <string>

using namespace std;

int main() {
    string message = "Hello, World!";

    // Print the string
    cout << message << endl;

    // Get the length of the string
    int length = message.length();
    cout << "Length: " << length << endl;

    // Access individual characters of the string
    char firstChar = message[0];
    char lastChar = message[length - 1];
    cout << "First character: " << firstChar << endl;
    cout << "Last character: " << lastChar << endl;

    // Concatenate strings
    string name = "Alice";
    string greeting = "Hello, " + name + "!";
    cout << greeting << endl;

    return 0;
}
