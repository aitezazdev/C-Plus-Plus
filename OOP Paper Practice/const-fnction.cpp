#include<iostream>
using namespace std;

class time {
public:
    int bro = 2;
    void here() {
        cout << "bro " << bro << endl;
    }
    void print() const {
        // here();   // cannot access normal fnc in const
        cout << "bro " << bro << endl;
    }
};

int main() {
    time obj;
    obj.print();

    return 0;
}
