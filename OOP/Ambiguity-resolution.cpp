// Ambiguity means same name functions in base classes, and that function is not in derive class.
// Overriding occurs when same function in base and derive class is present.

#include<iostream>
using namespace std;

class Room1{
    public:
        void print(){
        cout<<"Hello vro!"<<endl;
    }
};

class Room2{
    public:
        void print(){
        cout<<"Hello world!"<<endl;
    }
};

class Child : public Room1, public Room2{
    public:
        void Check(){
            Room1 :: print(); // Call the print() method from Room1
            //  Room2 :: print();
        }
};

int main(){
    Child obj;  
    obj.Check();
    return 0;
}

// class Child : public Room1, public Room2{
//     public:
//         using Room1 :: print;
// };

// int main(){
//     Child obj;  
//     obj.print();
//     return 0;
// }