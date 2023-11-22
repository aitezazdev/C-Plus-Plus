#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int rows = 2;
    int col = 2;
    int array[rows][col] = {{1,2},{3,4}}; 
    int max = array[0][0];
    int min = array[0][0];
    
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
       max = array[i][0];
       min = array[i][0];
       
        for (int j = 0; j < col; j++)
        {
           
           sum = sum + array[i][j];
           if(array[i][j] >= max)  
           {
            max = array[i][j];
           } 
		   if(array[i][j] <= min)
		   {
		   	min = array[i][j];
		   }     
        }
        cout<<"sum of row "<<i + 1<<" is = "<<sum<<endl;
        cout<<"maximum in row "<<i + 1<<" is = "<<max<<endl;
         cout<<"minimum in row "<<i + 1<<" is = "<<min<<endl;
    }

    return 0;
}
