#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main()
{
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Reverse main diagonal
    for (int i = 0; i < size / 2; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[size - 1 - i][size - 1 - i];
        matrix[size - 1 - i][size - 1 - i] = temp;
    }

    // Reverse secondary diagonal
    for (int i = 0; i < size / 2; i++)
    {
        int temp = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = matrix[size - 1 - i][i];
        matrix[size - 1 - i][i] = temp;
    }

    cout << "Matrix after reversing diagonals:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
