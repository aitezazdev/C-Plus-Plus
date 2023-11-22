#include<iostream>
using namespace std;

class Numbers{
    private:
        int real;
        int imaginary;
    public:
        void Set_Data(int r, int i){
            real = r;
            imaginary = i;
        }
        void Get_Data(){
            cout<<"Real part is : "<<real<<endl;
            cout<<"Imaginary part is : "<<imaginary<<endl;
        }
};
int main(){
    // Numbers obj;
    // Numbers *ptr = &obj;
    // (*ptr).Set_Data(2,5);
    // (*ptr).Get_Data();

    // Numbers *ptr = new Numbers;
    // (*ptr).Set_Data(2,5);
    // (*ptr).Get_Data();

    Numbers *ptr = new Numbers; // Dynamically allocated memory
    ptr->Set_Data(2,5);
    ptr->Get_Data();
    delete ptr;  // Release the dynamically allocated memory
    return 0;
}