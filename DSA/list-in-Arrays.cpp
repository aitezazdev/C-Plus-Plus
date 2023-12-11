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

void Delete(int idx){
    int i;
    if( idx > size){
        cout<<"Invalid"<<endl;
    }
    else{
        for(i = idx; i < size; i++){
            A[i] = A[i+1];
        }
        // cout<<"Value deleted at index "<<idx<<" is "<<A[i]<<endl;
        size--;
        cout<<"New size after delete is "<<size<<endl;
    }
}

int main(){
    Print();
    AddItem(20, 2);
    Print();
    Delete(3);
    Print();
    return 0;
}