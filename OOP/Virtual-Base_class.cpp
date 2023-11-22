#include<iostream>
using namespace std;
// Student --> Marks 
// Student --> Sports 
// Marks, Sports --> Result
// So, ambiguity occurs, and we resolve it with virtual 
class Student{
    protected:
        int rollNo;
    public:
        void set_rollNo(int roll){
            rollNo = roll;
        }
        void Show_rollNo(){
            cout<<"Roll No is : "<<rollNo<<endl;
        }
};
class Marks : virtual public Student{ // marks and sports classes are virtual bcz to avoid
    protected:                       // ambiguity. So roll No will inherit from one class
        float Cpp;
        float Java;
    public:
        void set_Marks(float c, float j){
            Cpp = c;
            Java = j;
        }
        void Show_Marks(){
            cout<<"Result is : "<<endl
                <<"C++ Marks are : "<<Cpp<<endl
                <<"Java Marks are : "<<Java<<endl;
        }
};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_Score(float s){
            score = s;
        }
        void Show_Score(){
            cout<<"Score out of 10 is : "<<score<<endl;
        }
};

class Result : public Marks, public Sports{
    private:
        int total;
    public:
        void Display(){
            Show_rollNo();
            Show_Marks();
            Show_Score();
            total = Cpp + Java + score;
            cout<<"Total score is : "<<total<<endl;
        }
};
int main(){
    Result obj;
    obj.set_rollNo(18);
    obj.set_Marks(85.3, 92.9);
    obj.set_Score(9);
    obj.Display();
    return 0;
}