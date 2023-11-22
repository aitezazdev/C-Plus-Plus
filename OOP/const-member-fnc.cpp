#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
    public:
        Student(int roll,string na){
            rollNo = roll;
            name  = na;
        };

        void meHere() const{
            // rollNo = 20;  cannot modify
            cout<<"roll no = "<<rollNo<<endl;
            cout<<"Name is = "<<name<<endl;
        }
};

int main(){
    Student S1(18, "zaz");
    S1.meHere();
}

