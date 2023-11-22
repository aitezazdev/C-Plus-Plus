#include<iostream>
using namespace std;
int main(){
    int a[5]={3,4,5,89,10};
    int i,smallest=a[0],largest=a[0];
    for(i=0;i<5;i++){
        if(smallest<a[i]){
        smallest=a[i];
        }
        if(largest>a[i]){
            largest=a[i];
        }
        
    }
    cout<<" the smallest value is"<<smallest<<endl;
        cout<<"the largest value is "<<largest<<endl;
}