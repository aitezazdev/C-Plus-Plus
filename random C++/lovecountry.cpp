// program that prompts the user to enter name, then country name and then i love your country

#include<iostream>
using namespace std;
int main(){

    string name,country;  /*string used instead of int cz of no numbers and int here would cause
                          unexpected errors*/

    cout<<"my name is = ";
    cin>>name;

    cout<<"my country name is = ";
    cin>>country;

    cout<<"My name is = "<<name<<endl;
    cout<<"My country name is = "<<country<<endl;
    cout<<"i love "<<country<<"!";

    return 0;
}