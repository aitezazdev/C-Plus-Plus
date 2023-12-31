#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < size; j++){
            if(arr[j] > arr[max]){
                max = j;
            }
        }
        if(max != i){
            int temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int numbers, size;

    cout<<"Enter size of an array : ";
    cin>>size;

    int *array = new int[size];

    cout<<"Enter 5 integers in random order : ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    SelectionSort(array, size);
    cout<<"Array in descending order is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}