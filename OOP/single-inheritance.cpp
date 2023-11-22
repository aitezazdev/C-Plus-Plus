#include<iostream>
using namespace std;
class Astronomy{
    int distance;
    public:
        int time;
        void set();
        int get1();
};
void Astronomy :: set(){
    distance = 20;
    time = 5;
}
int Astronomy :: get1(){
    return distance;
}

class speed : public Astronomy{
    int sol;
    public:
        void multiply();
        void print();
};
void speed :: multiply(){
    sol = time * get1();
}
void speed :: print(){
    cout<<"distance : "<<get1()<<endl;
    cout<<"time : "<<time<<endl;
    cout<<"speed : "<<sol<<endl;
}

int main(){
    speed s1;
    s1.set();
    s1.get1();
    s1.multiply();
    s1.print();
    return 0;
}