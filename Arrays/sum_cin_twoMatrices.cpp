#include<iostream>
using namespace std;
int main()
{
    int row, col;
    
    cout<<"enter no. of rows = ";
    cin>>row;
    cout<<"enter no. of columns = ";
    cin>>col;

    int sum_all[row][col];
    int matrix_1[row][col];
    int matrix_2[row][col];

    cout<<"enter numbers in your first matrix = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix_1[i][j];
        }  
        cout<<endl;
    }
    cout<<"enter numbers in your Second matrix = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix_2[i][j];
        }
        cout<<endl;  
    }

    cout<<"your entered matrix 1 is = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix_1[i][j]<<" ";
        } 
        cout<<endl; 
    }
    cout<<"your entered matrix 2 is = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix_2[i][j]<<" ";
        }  
        cout<<endl;
    }
    
    cout<<"sum of two matrices is = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_all[i][j]  = matrix_1[i][j] + matrix_2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<sum_all[i][j]<<" ";
        } 
        cout<<endl; 
    }
   
    return 0;
}