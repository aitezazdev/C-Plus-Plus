#include<iostream>
using namespace std;

class Student{
    public:
        int age;
        static int TotalStudents;
        static int TotalAge;

        void AddStudent(int age){
            TotalStudents++;
            cout<<"Student : "<<TotalStudents<<endl;
            cout<<"Student age : "<<age<<endl;
            TotalAge += age;
        }
        static double AverageAge(){
            return TotalAge / TotalStudents;
        }
};
int Student :: TotalStudents = 0;
int Student :: TotalAge = 0;

int main(){
    Student obj1;
    obj1.AddStudent(10);
    Student obj2;
    obj1.AddStudent(20);
    Student obj3;
    obj1.AddStudent(30);
    cout<<"Average age is : "<<Student::AverageAge()<<endl;


    return 0;
}