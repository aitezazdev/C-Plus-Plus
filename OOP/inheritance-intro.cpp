#include<iostream>
using namespace std;
class Cs{
    public:
        int rollno;
        float GPA;
   
        Cs(int roll, float gpa){
            rollno = roll;
            GPA = gpa;
        }
         void print(void){
            cout<<"total roll no are = "<<rollno<<endl;
            cout<<"total GPA is = "<<GPA<<endl;
        }
};
class Zaz : public Cs{
    public:
    Zaz() : Cs(20, 3.4){}
};

int main(){
    Cs s1(50, 4.0);
    s1.print();

    Zaz z1;
    cout<<"zaz roll no is = "<<z1.rollno<<endl;
    cout<<"zaz GPA is = "<<z1.GPA<<endl;
    return 0;
}