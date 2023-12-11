#include<iostream>
using namespace std;
int main(){
    int test = 20;
    int* store = &test;

    cout<<"Test = "<<test<<endl;
    cout<<"ampercent Test = "<<&test<<endl;
    cout<<"Store = "<<store<<endl;
    cout<<"*store = "<<*store<<endl;
}