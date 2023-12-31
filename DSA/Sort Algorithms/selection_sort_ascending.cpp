#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
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
    cout<<"Array in ascending order is : ";
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}