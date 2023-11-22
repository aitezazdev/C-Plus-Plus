// task 1 about car insurance

#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter your age as if you are eligible for car insurance \n";
    cin>>age;

    if ((age>=35) && (age<=80))
    {
    cout<<"You are between 35 and 80 and can save money on your car insurance \n";
   	cout<<"thanks for inputting your age \n";
   }

    else if ((age<0) || (age>160))
    cout<<"you are lying, you cannot be that age \n";
    
    else
    {
    cout<<"sorry, we dont have any deals for you today \n";
	}
    return 0;    
}