#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        int x , y;
    public:
        void SetSimple(int a, int b){
            x = a;
            y = b;
        }
        void ShowSimple(){
            cout<<"X + Y = "<< x + y<<endl;
            cout<<"X - Y = "<< x - y<<endl;
            cout<<"X / Y = "<< x / y<<endl;
            cout<<"X * Y = "<< x * y<<endl;
        }
};

class ScientificCalculator{
    protected:
        int a , b;
    public:
        void SetScientific(int A, int B){
            a = A;
            b = B;
        }
        void ShowScientific(){
            cout<<"Square root of a = "<<sqrt(a)<<endl;
            cout<<"Square root of b = "<<sqrt(b)<<endl;
            cout<<"Cube root of a = "<<cbrt(a)<<endl;
            cout<<"Cube root of a = "<<cbrt(b)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};
int main(){
    int value1;
    int value2;
    
    cout<<"\nEnter value of x : ";
    cin>>value1;
    cout<<"\nEnter value of y : ";
    cin>>value2;

    HybridCalculator object;
    object.SetSimple(value1, value2);
    object.ShowSimple();
    object.SetScientific(value1, value2);
    object.ShowScientific();
    return 0;
}