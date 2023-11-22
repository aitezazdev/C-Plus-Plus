// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter value of n = ";
//     cin>>n;

//     int array[n];
//     cout<<"enter "<<n<<" numbers = ";

//     for (int i = 0; i < n; i++)
//     {
//        cin>>array[i];
//     }
    
//     int MaxNo = INT_MIN;
//     int MinNo = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         MaxNo = max(MaxNo, array[i]);
//         MinNo = min(MinNo,array[i]);  
//     }
//     cout<<"max is = "<<MaxNo<<" "<<endl;
//     cout<<"min is = "<<MinNo<<" ";
//     return 0;

// }

// for loop
// #include <iostream>
// using namespace std;
// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int array[size];
//     cout << "Enter " << size << " numbers: ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }

//     int maximum = array[0];
//     int minimum = array[0];

//     for (int i = 1; i < size; i++) {
//         if (array[i] >= maximum) {
//             maximum = array[i];
//         }

//         if (array[i] <= minimum) {
//             minimum = array[i];
//         }
//     }

//     cout << "Maximum value: " << maximum <<endl;
//     cout << "Minimum value: " << minimum <<endl;

//     return 0;
// }

// while loop
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " numbers: ";

    int i = 0;
    while (i < size) {
        cin >> array[i];
        i++;
    }

    int maximum = array[0];
    int minimum = array[0];

    i = 1;

    while (i < size) {
        if (array[i] >= maximum) {
            maximum = array[i];
        }

        if (array[i] <= minimum) {
            minimum = array[i];
        }

        i++;
    }

    cout << "Maximum value: " << maximum << endl;
    cout << "Minimum value: " << minimum << endl;

    return 0;
}