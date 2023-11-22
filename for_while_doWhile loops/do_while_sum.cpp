 #include<iostream>
using namespace std;
int main()
{
int sum = 0;
int number;

do
{
    cout<<"enter number to add and zero(0) to exit the loop = ";
    cin>>number;

    sum +=number;

} while (number != 0);

    cout<<"the sum is = "<<sum;
    cout<<endl;

} 


