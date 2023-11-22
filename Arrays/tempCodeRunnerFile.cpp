#include<iostream>
using namespace std;
int main()
{
    int array[5] = { 9, 6 , 8, 3, 0};

    cout<<"unsorted array is = "<<array[5];

    for (int i = 0; i < 5-1; i++)
    {
       for (int j = i + 1; j < 5; j++)
       {