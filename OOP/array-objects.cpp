#include<iostream>
using namespace std;
class Test{
    int rollno;
    float GPA;
    public:
        Test(int roll, float gpa){
            rollno = roll;
            GPA = gpa;
        }
        
        void show(void){
            cout<<"ROll no is = "<<rollno<<endl;
            cout<<"GPA is = "<<GPA<<endl;
        }
};

int main(){
    Test array[2] = {Test(18, 3.4), Test(12, 3.7)};
    // array[0].show();
    // array[1].show();
    for (int i = 0; i < 2; i++)
    {
        array[i].show();
    }
    
    return 0;
}


// #include<iostream>
// using namespace std;
// class Test{
//     int rollno;
//     float GPA;
//     public:
//         Test(){
//             cout<<"\nenter roll no : ";
//             cin>>rollno;
//             cout<<"\nenter GPA : ";
//             cin>>GPA;
//         }
//         void show(void){
//             cout<<"ROll no is = "<<rollno<<endl;
//             cout<<"GPA is = "<<GPA<<endl;
//         }
// };

// int main(){
//     Test array[2] = { Test(), Test()};
//     // array[0].show();
//     // array[1].show();
//     for (int i = 0; i < 2; i++)
//     {
//         array[i].show();
//     }
    
//     return 0;
// }