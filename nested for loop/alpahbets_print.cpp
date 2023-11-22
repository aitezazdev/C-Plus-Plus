#include<iostream>
using namespace std;
int main(){

int i;
int j;
char alphabet = 'a';

for ( j = 1; j <= 5; j++)

{
for ( i = 1; i <= j; i++)
{
    cout<<alphabet;
     alphabet++;
}

 cout<<endl;
}

return 0;
}