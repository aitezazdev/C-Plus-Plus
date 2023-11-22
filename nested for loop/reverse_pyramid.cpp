#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

int n=5;

for (int i=n; i>=1 ; i--)
{

// for spaces
for (int k=n-i; k>0;  k--)
{
    cout<<" ";                       // 4 blanks spaces created to left
}

for (int j=i; j>0; j--)

{
    cout<<"* ";                    // 4 blanks spaces created to right





    
    Sleep(300);
}

    cout<<endl;
}

return 0;

}