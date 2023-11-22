#include<iostream>
using namespace std;
int main (){

    int Marks;
    cout<<"Enter Your Marks \n";
    cin>>Marks;

    // Conditions for promotion to next Class

    if ((Marks>=90) && (Marks<=100))
    cout<<"your marks is"<<Marks<<"and Grade is A";
    if ((Marks>=80) && (Marks<89))
    cout<<"your marks is"<<Marks<<"and your Grade is B";
    if ((Marks>=70) && (Marks<=79))
    cout<<"your marks is"<<Marks<<"and your Grade is C";
    if ((Marks>=60) && (Marks<=69))
    cout<<"your marks is"<<Marks<<"and your Grade is D";
    if (Marks<59) 
    cout<<"your marks is"<<Marks<<"and you are FAIL";
    if ((Marks<0) || (Marks>100))
    cout<<"invalid Marks Entry";

    return 0;
}