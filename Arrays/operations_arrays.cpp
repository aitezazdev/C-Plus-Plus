#include<iostream>
using namespace std;
int main()
{

int a[3];
int b[3];

int add[3], sub[3], mult[3];

cout<<"enter 3 integers for array a = "<<endl;
for (int i = 0; i < 3; i++)
{
    cin>>a[i];
}

cout<<"enter 3 integers for array b = "<<endl;
for (int i = 0; i < 3; i++)
{
    cin>>b[i];
}
cout<<"addition of a and b is = "<<endl;
for (int i = 0; i < 3; i++)
{
    add[i] = a[i] + b[i];
    cout<<add[i]<<" ";
}

cout<<endl<<"subtraction of a and b is = "<<endl;
for (int i = 0; i < 3; i++)
{
    sub[i] = a[i] - b[i];
    cout<<sub[i]<<" ";
}

cout<<endl<<"multiplication of a and b is = "<<endl;
for (int i = 0; i < 3; i++)
{
    mult[i] = a[i] * b[i];
    cout<<mult[i]<<" ";
}

return 0;
}