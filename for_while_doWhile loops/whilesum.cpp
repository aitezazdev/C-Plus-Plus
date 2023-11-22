
// Program which takes values from user and add it

#include<iostream>
using namespace std;
int main(){

    int sum=0;
    int i=1;
    int N;

    while (i<6)
    {
        cout<<"Enter Number =  ";
        cin>>N;   

        sum+=i;
        i++;
    }

    cout<<"Sum is "<<sum;

    return 0;
    
}