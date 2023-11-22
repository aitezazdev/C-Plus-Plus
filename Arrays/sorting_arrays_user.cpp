#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of your array = ";
    cin>>size;

    int zaz[size];
    cout<<"enter "<<size<<" numbers in your array = ";
    for (int i = 0; i < size; i++)
    {
        cin>>zaz[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (zaz[j] < zaz[i]){

                
                int temp = zaz[j];
                zaz[j] = zaz [i];
                zaz[i] = temp;
            }   
        }  
    }
    for (int i = 0; i < size; i++)
    {
        cout<<zaz[i]<<" ";
    }
    


}