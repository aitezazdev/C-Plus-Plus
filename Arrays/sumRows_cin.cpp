#include<iostream>
using namespace std;
int main()
    {
        int row;
        int col;
        

        cout<<"enter number of rows = ";
        cin>>row;
        cout<<"enter number of columns = ";
        cin>>col;
        
		int matrix[row][col];
        cout<<"enter numbers in your "<<row<<" cross "<<col<<" matrix = "<<endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin>>matrix[i][j];
            }   
        }
        
        cout<<"your matrix is = "<<endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout<<matrix[i][j]<<" ";
            }   
            cout<<endl;
        }

        for ( int i = 0; i < row; i++)
    {
        int sum = 0; 
       
        for ( int j = 0; j < col; j++)
        {
           sum = sum + matrix[i][j];
        }
        cout<<"sum of row "<<i + 1<<" is = "<<sum<<endl;
    }
    	
        return 0;
    }
