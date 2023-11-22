#include<iostream>
using namespace std;

class Room{
    protected:
        int students;
    public:
        void SetStudents(int a){
            students = a;
        }
};
class Marks{
    protected:
        int TotalGPA;
    public:
        void SetMarks(int a){
            TotalGPA = a;
        }
};
class Zaz{
    protected:
        float GPA;
    public:
        void SetGpa(float a){
            GPA = a;
        }
};

class Details : public Room, public Marks, public Zaz{
    protected:
        int value1 = 1;
    public:
        int value2 = 2;
        void Get(){
            cout<<"Total Students are : "<<students<<endl;
            cout<<"Total GPA is : "<<TotalGPA<<endl;
            cout<<"Zaz GPA is : "<<GPA<<endl;
        }
};
int main(){
    Details object;
    object.SetStudents(50);
    object.SetMarks(4);
    object.SetGpa(3.4);
    object.Get();
    cout<<object.value2; // we can accesss it cz its public
    // cout<<object.value1; // error cz its protected cannot access outside the classess

    return 0;
}