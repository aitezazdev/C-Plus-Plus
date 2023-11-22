#include<iostream>
using namespace std;
class User{
    public:
    User(int a, int b){
        cout<<"a value is = "<<a<<endl;
        cout<<"b value is = "<<b<<endl;
    }
};
int main(){
    int x, y;
    cout<<"\n enter x = ";
    cin>>x;
    cout<<"\n enter y = ";
    cin>>y;
    User u1(x, y); // constructor
    
    return 0;
}