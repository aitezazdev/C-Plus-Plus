#include<iostream>
using namespace std;

class Numbers{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;
        void set();
        int getNum1(){
            return num1;
        }
};
void Numbers :: set(){
    num1 = 10;
    num2 = 20;
    num3 = 30;
}

class Extend : public Numbers{
    int result;
    public:
    void print(){
        cout<<"private (num1) value is : "<<getNum1()<<endl; // num1 is accessed here by function
        cout<<"public (num2) value is : "<<num2<<endl;
        cout<<"protected (num3) value is : "<<num3<<endl;
    }
};

int main(){
    Extend s1;
    s1.set();
    s1.getNum1();
    s1.print();
    // s1.num1; private, so no access outside the class
    // s1.num2; protected, also no access outside the classess
    return 0;
}