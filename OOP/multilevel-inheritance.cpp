#include<iostream>
using namespace std;
class Paper{
    int rollno;
    public:
        void set_roll_no(int roll){
            rollno = roll;
        }
        void get_roll_no(){
            cout<<"roll no is : "<<rollno<<endl;
        }
};

class Exam : public Paper{
    private:
        int coding;
        int java;
    public:
        int result;
        void set_coding(int code){
            coding = code;
            cout<<"Coding marks : "<<coding<<endl;
        }
        void set_java(int javacode){
            java = javacode;
            cout<<"Java marks : "<<java<<endl;
        }
        int Calculate(){
            result = (coding + java) / 2;
            return result;
        }
};

class Result : public Exam{
    public:
        void Show_result(){
        cout<<"Result is = "<<result<<"%"<<endl;
        }

};
int main(){
    Result s1;
    s1.set_roll_no(18);
    s1.get_roll_no();
    s1.set_coding(92);
    s1.set_java(85);
    s1.Calculate();
    s1.Show_result();  
    return 0;
}