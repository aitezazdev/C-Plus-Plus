#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
	int all_sum = 0;  
    int rows = 3;
    int col = 3;
    int array[rows][col] = {{1,2,3}, { 4,5,6}, {7,8,9}}; 
    
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
       
        for (int i = 0; i < rows; i++)
        {
           sum = sum + array[i][j];
        }
        cout<<"Sum of "<<j + 1<<" column is = "<<sum<<endl;
    }
	
    return 0;
}
