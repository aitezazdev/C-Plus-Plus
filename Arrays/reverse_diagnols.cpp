#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout<<"matrix elements are = "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
    

    cout << "Left diagonal elements are = ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
            {
                cout << matrix[row][col] << " ";
            }
        }
    }
     cout<<endl;

    cout << "Right diagonal elements are = ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row + col == 2)
            {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;

    cout << "Reverse left diagonal elements are = ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row + col == 2)
            {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;

    cout << "Reverse right diagonal elements are = ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
            {
                cout << matrix[row][col] << " ";
                
            }
        }
    }
    cout << endl;

    cout<<"reversed matrix is = "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<matrix[row][col]<<" ";
        }
         cout<<endl;
    }
   
    return 0;
}


