
#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int reversed[3][3];

    cout << "Original matrix:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << "transpose of above matrix:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            reversed[row][col] = matrix[col][row];
            cout << reversed[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}