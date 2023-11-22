#include<iostream>
using namespace std;
int main()
{
    int array[5] = { 9, 6 , 8, 3, 0};

    cout<<"unsorted array is = ";
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    

    for (int i = 0; i < 5-1; i++)
    {
       for (int j = i + 1; j < 5; j++)
       {
        if (array[j] < array[i])
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }  
       } 
    }
    cout<<endl<<"sorted array is = ";
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }

   return 0; 
}