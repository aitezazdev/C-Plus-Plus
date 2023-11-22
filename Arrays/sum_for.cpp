#include<iostream>
using namespace std;
int main(){

    int a[5]={1,2,3,4,5};
    int sum=0;
    int b;

    for ( b = 0; b <= 4; b++)
    {
        cout<<a[b]<<endl;
        sum+=a[b];
    }
    
    cout<<"sum is = "<<sum;

    return 0;
    
}