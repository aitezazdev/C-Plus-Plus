#include<iostream>
using namespace std;

int BinarySearch(int arr[], int left, int right, int n){
    while(left <= right){
        int mid =(left + right)/2;
        if( arr[mid] == n){
            cout<<"Value found at index : "<<mid;
            return mid;
        }
        else if(arr[mid] < n){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout<<"Value not found";
    return -1;
}

int main(){
    int num;

    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    cout<<"Array is : ";
    for(int i = 0; i < 10; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\nEnter number to search : ";
    cin>>num;

    BinarySearch(array, 0, 9, num);  // 0 and 9 are indexes
    return 0;
}