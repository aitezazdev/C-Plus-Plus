
#include<iostream>
using namespace std;

int sum(int start, int end)
{
    int sum1 = 0;
    for (int i = start; i <= end; i++)
    {
        if (i>end)
        {
            sum1 == 0;
        }

        else
        {
            sum1 = sum1 + i;
        }
            
    }
        return sum1;
}

int main()
{
    int start, end;
    cout<<"enter start number = ";
    cin>>start;
    cout<<"enter end number= ";
    cin>>end;
       
    cout<<"sum is = "<<sum(start,end);
    
    return 0;
}