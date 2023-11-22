#include<iostream>
using namespace std;
int main(){

    int list[5];
    int i;

    for ( i = 0; i <5  ; i++)
    {
       cout<<"enter an integer value in list ["<<i<<"]= ";
       cin>>list[i];
    }
    return 0;
}