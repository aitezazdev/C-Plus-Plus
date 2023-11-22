#include<iostream>
using namespace std;

    class Book{
        private:
            int a;
            int b;
        public:
            void SetData(int x, int y){
                a = x;
                b = y;
            }
            void Print(){
                cout<<"a = "<<a<<endl;
                cout<<"b = "<<b<<endl;
            }
    };

    class Chapter : public Book{
        private:
            int c;
            int d;
        public:
            void getData(int z){
                c = z;
            }
            void getData(int x, int y){   // function overloading
                c = x;
                d = y;
            }
            void Print() {                // Method Overriding
              cout<<"c = "<<c<<endl;  
              cout<<"d = "<<d<<endl;  
            }
    };

int main(){
    Chapter object;
    object.SetData(10, 20);    
    object.getData(30, 40);    // output will depend on parameters
    object.Book :: Print();    // accessing Print of book class
    object.Print();
    return 0;
}