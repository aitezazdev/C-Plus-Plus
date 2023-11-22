#include<iostream>
using namespace std;

class Shop{
        int id;
        int Price;
    public:
        void Set_Data(int i, int p){
            id = i;
            Price = p;
        }
        void Get_Data(){
            cout<<"Code of item : "<<id<<endl;
            cout<<"Price of item : "<<Price<<endl;
        }
};
int main(){
    int size = 3;
    int a, b;
    Shop *ptr = new Shop[size];
    Shop *Tempptr = ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and Price of item "<< i + 1<<endl;
        cin>>a>>b;
        ptr->Set_Data(a , b);
        // ptr->Get_Data(); // when you want direct result after enter numbers
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item nbr : "<<i + 1<<endl;
        Tempptr->Get_Data();
        Tempptr++;
    }
       
    return 0;
}