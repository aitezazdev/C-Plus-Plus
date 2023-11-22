#include<iostream>
using namespace std;
int main()
    {
        int row;
        int col;
        

        cout<<"enter number of rows = ";
        cin>>row;
        if(cin.fail() || row < 0 || row > 100)
        {
        	cout<<"input numbers are invalid, try again";
        	return 0;
		}
		
        cout<<"enter number of columns = ";
        cin>>col;
        if(cin.fail() || col < 0 || col > 100)
        {
        	cout<<"input numbers are invalid, try again";
        	return 0;
		}
        
        int matrix[row][col];
        cout<<"enter numbers in your "<<row<<" cross "<<col<<" matrix = "<<endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin>>matrix[i][j];
                if(cin.fail())
				{
				cout<<"invalid inputs for matrix. Try again";
                return 0;
                }
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

        for (int i = 0; i < row; i++)
    {
        int sum = 0; 
       
        for (int j = 0; j < col; j++)
        {
           sum = sum + matrix[i][j];
        }
        cout<<"sum of row "<<i + 1<<" is = "<<sum<<endl;
    }
	    return 0;
    }