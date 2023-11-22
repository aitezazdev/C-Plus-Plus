#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  cout<<"left diagnol elements are = ";
    for (int row = 0; row < 3; row++)
    {   
        for (int col = 0; col < 3; col++)
        {    
            if (row==col)
            {
                cout<<matrix[row][col]<<" ";
            }
        }    
    }
    cout<<endl;

    cout<<"right diagnol elements are = ";
    for (int row = 0; row < 3; row++)
    {   
        for (int col = 0; col < 3; col++)
        {    
            if ( row + col == 2)
            {
                cout<<matrix[row][col]<<" ";
            }
        }    
    }
     return 0;
}