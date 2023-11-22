#include <iostream>
using namespace std;

int main()
{
    int row;
    int col;

    cout << "Enter number of rows = ";
    cin >> row;

    if (cin.fail() || row < 0 || row > 100)
    {
        cout << "Input numbers are invalid, try again";
        return 0;
    }

    cout << "Enter number of columns = ";
    cin >> col;

    if (cin.fail() || col < 0 || col > 100)
    {
        cout << "Input numbers are invalid, try again";
        return 0;
    }


    int matrix[row][col];

    cout << "Enter numbers in your " << row << "x" << col << " matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
            if (cin.fail())
            {
                cout << "Invalid inputs for the matrix. Try again";
                return 0;
            }
        }
    }

    cout << "Your matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < col; j++)
    {
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << " is = " << sum << endl;
    }

    return 0;
}
