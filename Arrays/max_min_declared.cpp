// while loop
// #include <iostream>
// using namespace std;

// int main() {

//     int size[5]={10,20,30,40,50};

//     int maximum = size[0];
//     int minimum = size[0];

//     int i = 0;
//     while (i < 5 ){
//         if (size[i] >= maximum) {
//             maximum = size[i];
//         }

//         if (size[i] <= minimum) {
//             minimum = size[i];
//         }

//         i++;
//     }

//     cout << "Maximum value: " << maximum << endl;
//     cout << "Minimum value: " << minimum << endl;

//     return 0;
// }

// for loop
#include <iostream>
using namespace std;

int main() {

    int size[5]={10,20,30,40,50};
    int maximum = size[0];
    int minimum = size[0];
   
    for (int i = 0; i < 5; i++)
    {
        if (size[i] >= maximum) {
            maximum = size[i];
        }

        if (size[i] <= minimum) {
            minimum = size[i];
        }
    }

    cout<<"Maximum value: " << maximum << endl;
    cout<<"Minimum value: " << minimum << endl;

    return 0;
}


// conditional operator
// #include<iostream>
// using namespace std;

// int main() {
//     int size[3] = {67, 500, 1123};
//     int max = size[0];
//     int min = size[0];
//     int i;
//     for (i = 0; i < 3; i++) {
//         int result = (size[i] >= max) ? max = size[i] : min = size[i];
//     }
//     cout << "max: " << max << endl;
//     cout << "min: " << min << endl;
//     return 0;
// }
