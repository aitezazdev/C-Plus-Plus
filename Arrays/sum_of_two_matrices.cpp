#include<iostream>
using namespace std;
int main()
{
	int rows = 3;
	int col = 3;
	int sum_all[rows][col];
	
	int matrix_1[rows][col] = {{5,1,1},{1,1,1},{1,1,5}};
	int matrix_2[rows][col] = {{5,2,2},{2,2,2},{2,2,5}};
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < col; j++)
		{
			sum_all[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	}
	
	cout<<"sum of two matrices is = "<<endl;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout<<sum_all[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}