
#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        void Print_info(){
            cout<<"Name is : "<<name<<endl;
            cout<<"Age is : "<<age<<endl;
        }
};

class Student : public Person{
    protected:
        float GPA;
    public:
    Student(string a, float b, int c) : Person(a, b){
        GPA = c;
    }
        void Print_info(){
            Person :: Print_info();
            cout<<"GPA is : "<<GPA<<endl;
        }
};
int main(){
    Student obj("Zaz", 70, 3.4);
    obj.Print_info();

    return 0;
}