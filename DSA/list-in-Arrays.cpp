#include<iostream>
using namespace std;

int A[100] = {1,2,3,4,5};
int size = 5;
int current;

void Print(){
    int i;
    if(size == 0){
        cout<<"List is empty"<<endl;
        return;
    }
    for(i = 0; i < size; i++){
        cout<<A[i]<<endl;
    }
}

// Adding elements
void AddItem(int v, int idx){
    if(idx > size){
        cout<<"Invalid"<<endl;
        return;
    }
    for(int i = size; i >= idx; i--){
        A[i] = A[i - 1];
    }
    A[idx] = v;
    cout<<"value stored at index "<<idx<<" is "<<A[idx]<<endl;
    size++;
    cout<<"Size after adding is "<<size<<endl;
}

// Deleting Elements
void Delete(int idx){
    int i;
    if( idx > size){
        cout<<"Invalid"<<endl;
    }
    else{
        for(i = idx; i < size; i++){
            A[i] = A[i+1];
        }
        cout<<"Value deleted at index "<<idx<<" is "<<A[idx]<<endl;
        size--;
        cout<<"New size after delete is "<<size<<endl;
    }
}

// Finding Elements
int FindElement(int fd){
    for(int i = 0; i < size; i++){
        if(A[i] == fd){
            cout<<"Element "<<fd<<" found at index "<<i<<endl;
            return i;
        }
    }
        cout<<"Element "<<fd<<" not found in the array"<<endl;
        return -1;
}

// Length of An array
int ArrayLength(){
    int l;
    cout<<"Length of array is "<<l<<endl;
    return l = sizeof(A) / sizeof(A[0]);
}

// UpdateElement
void UpdateElement(int newValue, int idx){
    if(idx > size){
        cout << "Invalid index for update" << endl;
        return;
    }
    A[idx] = newValue;
    cout << "Element at index " << idx << " updated to " << newValue << endl;
}

int main(){
    Print();

    // AddItem(20, 2);
    // Print();

    // Delete(3);
    // Print();

    // FindElement(3);

    // ArrayLength();

    // UpdateElement(100, 2);
    // Print();

    return 0;
}