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
class Zaz : private Cs{
    public:
    Zaz(int roll, float gpa) : Cs(roll, gpa){
        rollno = roll;
        GPA = gpa;
    }
    void print(void){              
    cout<<"zaz roll no is = "<<rollno<<endl;
    cout<<"zaz GPA is = "<<GPA<<endl;
    }
};

int main(){
    Cs s1(50, 4.0);
    s1.print();

    Zaz z1(18, 3.4);
    z1.print();
    return 0;
}

// #include<iostream>
// using namespace std;
// class Cs{
//     public:
//         int rollno;
//         float GPA;

//         Cs(int roll, float gpa){
//             rollno = roll;
//             GPA = gpa;
//         }
//         void print(void){
//             cout<<"total roll no are = "<<rollno<<endl;
//             cout<<"total GPA is = "<<GPA<<endl;
//         }
//         Cs(){}
// };
// class Zaz : private Cs{
//     public:
//     Zaz(int roll, float gpa){
//         rollno = roll;
//         GPA = gpa;
//     }
//     void print(void){              
//     cout<<"zaz roll no is = "<<rollno<<endl;
//     cout<<"zaz GPA is = "<<GPA<<endl;
//     }
// };

// int main(){
//     Cs s1(50, 4.0);
//     s1.print();

//     Zaz z1(18, 3.4);
//     z1.print();
//     return 0;
// }