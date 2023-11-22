#include<iostream>
using namespace std;
int main(){

int order;
cout<<"Enter your choice \n 1 for coffee \n 2 for tea \n 3 for pepsi \n";
cin>>order;

if (order==1)
cout<<"coffee will be served";
if (order==2)
cout<<"tea will be served";
if (order==3)
cout<<"pepsi will be served";
if ((order<1) || (order>3))
cout<<"order is invalid";




return 0;
}