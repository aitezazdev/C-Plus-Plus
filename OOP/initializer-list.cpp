#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        const float GPA;
    public:
        Student(int roll, float gpa) : rollNo(roll), GPA(gpa) {
            cout<<"constructor executed"<<endl;
    }
    void print(){
        cout<<"Roll No = "<<rollNo<<endl;
        cout<<"GPA is = "<<GPA<<endl;
    }
};

int main(){
    Student S1(18, 3.4);
    S1.print();

    return 0;
}

// we use initializer list when we want to assign value to constant data members