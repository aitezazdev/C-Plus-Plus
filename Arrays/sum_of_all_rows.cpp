#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
	int all_sum = 0;  
    int rows = 3;
    int col = 3;
    int array[rows][col] = {{1,1,1}, { 2,2,2}, {3,3,3}}; 
    
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
       
        for (int j = 0; j < col; j++)
        {
           sum = sum + array[i][j];
        }
        
         all_sum = all_sum + sum;
    }
	cout<<"Sum of all rows are = "<<all_sum;
    return 0;
}
