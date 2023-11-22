#include<iostream>
using namespace std;
int main()
{
     int sum = 0; //*  declare and initiallize sum to zero 
    int rows = 3;
    int col = 3;
    int array[rows][col] = {{1,1,1}, { 2,2,2}, {3,3,3}}; 
    
    for (int i = 0; i< rows; i++)
    {
        int sum = 0; //* reset sum to zero for each row
       
        for (int j = 0; j < col; j++)
        {
           sum = sum + array[i][j];
        }
        
        cout<<"sum of row "<<i + 1<<" is = "<<sum<<endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main() {
    
//     const int ROWS = 3;
//     const int COLS = 4;

//     int arr[ROWS][COLS] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     int rowNumber;
//     cout << "Enter the row number (0-" << ROWS - 1 << "): ";
//     cin >> rowNumber;

//     if (rowNumber >= 0 && rowNumber < ROWS) {
//         int sum = 0;
//         for (int j = 0; j < COLS; j++) {
//             sum += arr[rowNumber][j];
//         }
//         cout << "Sum of Row " << rowNumber + 1 << ": " << sum <<endl;
//     } else {
//         cout << "Invalid row number entered!" <<endl;
//     }

//     return 0;
// }
