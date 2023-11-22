#include<iostream>
using namespace std;
int main(){

    int a[2][2];
    int b[2][2] = {1,2,3,4};
    int c[3][3] = {{1,1,1}, {2,2,2}, {3,3,3}};

    cout<<"output of c is = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}

int zaz[3][3];
cout<<"enter numbers in your 1st array = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>zaz[i][j];
    }   
}
cout<<"user input 1st array is = "<<endl;
for (int  i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<zaz[i][j]<<" ";
    }
        cout<<endl;
}


int stark[3][3];
cout<<"enter numbers in your 2nd array = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>stark[i][j];
    }   
}
cout<<"user input 2nd array is = "<<endl;
for (int  i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<stark[i][j]<<" ";
    }
        cout<<endl;
}

int add[3][3], sub[3][3], mult[3][3], div[3][3];

cout<<"addition of first and second array is = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        add[i][j] = zaz[i][j] + stark[i][j];
        cout<<add[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"subtraction of first and second array is = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       sub[i][j] = zaz[i][j] - stark[i][j];
        cout<<sub[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"multiplication of first and second array is = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       mult[i][j] = zaz[i][j] * stark[i][j];
        cout<<mult[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"division of first and second array is = "<<endl;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        div[i][j] = zaz[i][j] / stark[i][j];
        cout<<div[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}