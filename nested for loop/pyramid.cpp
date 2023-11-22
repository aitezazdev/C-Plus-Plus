#include<iostream>
using namespace std;
int main()
{

int n=5;

for (int i = 1; i<=n ; i++)
{

// for spaces
for (int k=n-i; k>0;  k--)
{
    cout<<" ";                       // 4 blanks spaces created to left
}

for (int j=1; j<=i; j++)

{
    cout<<"* ";                     // 4 blanks spaces created to left
}

    cout<<endl;
}

return 0;

}