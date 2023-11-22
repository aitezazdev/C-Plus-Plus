#include<iostream>
#include<windows.h>
using namespace std;
int main(){

int i;
int j;

for ( j = 1; j <= 5; j++){

for ( i = 1; i <= j; i++)
{
    cout<<"*";
    Sleep(300);
}
 cout<<endl;
}

return 0;
}