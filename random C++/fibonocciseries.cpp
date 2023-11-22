#include<iostream>
using namespace std;
int main(){

    int n1=0;
    int n2=1;
    cout<<n1;
    cout<<n2;

    int newN;
    int count;

    while (cout<=10)
    {
        newN = n1 + n2;

        cout<<newN;

        n1=n2;
        n2=newN;
        
        count++;
    }
    
}