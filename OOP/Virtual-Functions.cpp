#include<iostream>
using namespace std;

class CS{
    public:
        string name;
        CS(string n){
            name = n;
        }
        virtual void Print(){
            cout<<"Name of Class CS is : "<<name<<endl;
        }
};

class ZAZ : public CS{
    public:
        string name1;
        ZAZ(string n, string na) : CS (n){
        name1 = na;
        }
        void Print(){
            cout<<"Name of Class CS is : "<<name<<endl;
            cout<<"Name of class ZAZ is : "<<name1<<endl;
        }
};

int main(){
    CS* cs_ptr;

    CS cs_obj("CS");
    ZAZ zaz_obj("CS", "ZAZ");

    cs_ptr = &zaz_obj;
    cs_ptr->Print();

    return 0;
}