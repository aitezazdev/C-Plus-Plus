// for loop
#include<iostream>
using namespace std;
int main()
{

int size;

cout<<"enter size of an array = ";
cin>>size;

int mylist[size];
cout<<"enter "<<size<<" numbers in your array = ";
for (int i = 0; i < size; i++)
{
    cin>>mylist[i];
}

cout<<"mylist = ";
for (int i = 0; i < size; i++)
{
    cout<<mylist[i]<<" ";
}
cout<<endl;

cout<<"your list = ";
for (int i = size-1; i >= 0 ; i--)
{
   cout<<mylist[i]<<" ";
}

return 0;
}

// // while loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter size of an array: ";
//     cin >> size;

//     int mylist[size];
//     cout << "Enter " << size << " numbers in your array: " << endl;

//     int i = 0;
//     while (i < size)
//     {
//         cin >> mylist[i];
//         i++;
//     }

//     cout << "Array elements: ";
//     i = 0;
//     while (i < size)
//     {
//         cout << mylist[i] << " ";
//         i++;
//     }
//     cout << endl;

//     cout << "Array elements in reverse order: ";
//     i = size - 1;
//     while (i >= 0)
//     {
//         cout << mylist[i] << " ";
//         i--;
//     }
//     cout << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// 	int x[5];
// 	int i;
// 	cout<<"mylist: "<<endl;

// 	for(i=0	; i<5; i++)
//     {
// 	cin>>x[i];
//     }
// 	cout<<"Yourlist: "<<endl;
// 	for(i=5-1; i>=0; i--)
//     {
//     cout<<x[i]<<endl;
//     }
// 	return 0;
// }