#include<iostream>
using namespace std;
int main(){

    int sum=0;
    int b=0;
    int a[5]={1,2,3,4,5};

    while (b<=4)
    {
        cout<<a[b]<<endl;
        sum+=a[b];
        b++;
    }
    cout<<"sum is = "<<sum;
    return 0;
}
