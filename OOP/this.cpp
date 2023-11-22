#include<iostream>
using namespace std;

class Simple{
        int a;
    public:
        void Set(int a){
            this->a = a; // this is used to avoid ambiguity, x = x,
                        // both points to parameter x, cz of scope,
                        //  It's like saying "the x on the left side of 
                        //  the assignment belongs to the object itself".
            // return *this;
        }                  
        void Get(){
            cout<<"a = "<<a<<endl;
        }
};
int main(){
    Simple obj;
    obj.Set(10);
    // obj.Set(10).Get();
    obj.Get();

    return 0;
}