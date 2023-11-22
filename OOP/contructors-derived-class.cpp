#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
    public:
        Student(int roll){
            rollNo = roll;
            cout<<"Student class constructor executed and values assigned"<<endl;
        }
        void PrintRoll(){
            cout<<"Roll no is : "<<rollNo<<endl;
        }
};

class Marks{
    protected:
        float GPA;
        int coding, ps;
    public:
        Marks(float mark, int code, int p){
            GPA = mark;
            coding = code;
            ps = p;
            cout<<"Marks class constructor executed and values assigned"<<endl;
        }
        void PrintGPA(){
            cout<<"GPA is : "<<GPA<<endl;
            cout<<"Coding marks are : "<<coding<<endl;
            cout<<"P.S marks are : "<<ps<<endl;
        }
};

class Derived : public Student, virtual public Marks{ // virtual has priority over others
        int result;
        int last;
    public:
        Derived(int a, float b, int c, int d, int e) : Student(a), Marks(b, c, d){
            last = e; // last is class derived contructor member
            cout<<"Derived class constructor executed and values assigned"<<endl;
        }
        void SetAll(){
            cout<<"Derived contructor member value (random) : "<<last<<endl;
        }
        void display(){
            PrintRoll();
            PrintGPA();
            SetAll();
            result = coding + ps;
            cout<<"Total marks are (coding + P.S): "<<result<<endl;
        }
};
int main(){
    Derived obj(18, 3.4, 85, 21, 3);
    obj.display();

    return 0;
}