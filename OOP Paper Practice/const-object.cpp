#include<iostream>
using namespace std;

class me{
    public:
    int val;
    int nbr;
        me(int v){
            val = v;
        }
        // void ok(){
        //     cout<<"number = "<<nbr<<endl;
        // }
        void print() const{
            cout<<"value : "<<val<<endl;
        }
};
int main(){
    const me obj(3);
    //  obj.ok(); cannot access non-const functions
    obj.print();

    return 0;
}