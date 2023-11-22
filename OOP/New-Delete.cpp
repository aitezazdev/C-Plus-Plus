#include<iostream>
using namespace std;
int main(){
    
    int a = 2;
    int* b = &a;

    cout<<*b<<endl;
    cout<<&a<<endl;

    int* c = new int(4);
    cout<<*c<<endl;
    delete c;
    cout<<*c<<endl;  // garbage value

    return 0;
}