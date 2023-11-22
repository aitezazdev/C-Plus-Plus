#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter value of a = " <<endl;
    cin>>a;
    cout<<"enter value of b = " <<endl;
    cin>>b;

    int  c=a+b;
    cout<<" the output c = "<< c <<endl;

    int  d=a-b;  
    cout<< " the output b = "<<d <<endl;

    cout<<"c<d"<<(c<d)<<endl;
    cout<<"c>d"<<(c>d)<<endl;
    cout<<"c==d"<<(c==d)<<endl;
    cout<<"c<=d"<<(c<=d)<<endl;
    cout<<"c>=d"<<(c>=d)<<endl;
    cout<<"c!=d"<<(c!=d)<<endl;
    
    return 0;
    }
