#include<iostream>
using namespace std;

int LinearSearch(int a[],int n,int size){
    for(int i = 0; i < size; i++){
        if(a[i] == n){
            cout<<"\nValue Found at index : "<<i<<" and position : "<<i + 1<<endl;
            return i;
        }
    }
        cout<<"Value not found"<<endl;
        return -1;
}

int main(){
    int size, num;
    cout<<"Enter size of an array : ";
    cin>>size;

    int *array = new int[size];
    cout<<"Enter elements in an array: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout<<"Array is : ";
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }

    cout<<"\nEnter a number to find in the array : ";
    cin>>num;
    LinearSearch(array, num, size);

    delete[] array;
    return 0;
}