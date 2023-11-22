#include<iostream>
#include<ctime>
using namespace std;
int main(){


 
     srand(time(NULL));
     int num = (rand() % 6) + 1;
     cout<<num;
}