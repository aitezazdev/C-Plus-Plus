#include<iostream>
using namespace std;

class Base{
    public:
        int var_base = 10;
        void Display(){
        cout<<"Variable base value is : "<<var_base<<endl;
    }
};

class Derived : public Base{
    public:
        int var_Derived = 20;
        void Display(){
            cout<<"Variable base value is : "<<var_base<<endl;
            cout<<"Variable derived value is : "<<var_Derived<<endl;
        }
};
int main(){
    Base * base_pointer;
    Derived obj_Derived;
    base_pointer = &obj_Derived;
    base_pointer->Display(); // variable base : 10

    // Base * base_pointer;
    // Base obj_Base;
    // base_pointer = &obj_Base;
    // base_pointer->Display(); // variable base : 10

    // Derived * derive_pointer;
    // Derived obj_derived;
    // derive_pointer = &obj_derived;
    // derive_pointer->Display();    // variable base : 10 and variable derived : 20

    return 0;
}

// we cannot change/modify value in derived class, when we made pointer of base class 