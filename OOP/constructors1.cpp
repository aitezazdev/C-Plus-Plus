#include<iostream>
using namespace std;

class MyName{
    public:
    MyName(){
        cout<<"i am constructor \n";
    }

    void me(){
        cout<<"bro \n";
    }

    void here(){
        cout<<"bro is here \n";
    }
};

int main(){
    MyName obj1;
    obj1.here();
    obj1.me();

    return 0;
}