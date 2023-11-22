#include<iostream>
using namespace std;
int main(){

int order;
cout<<"Enter your choice \n 1 for coffee \n 2 for tea \n 3 for pepsi \n";
cin>>order;

switch (order){
    case 1:
    cout<<"coffee will be served";
    break;
    case 2:
    cout<<"tea will be served";
    break;
    case 3:
    cout<<"pepsi will be served";
    break;
default :
    cout<<"order is invalid";
}
    return 0;
}