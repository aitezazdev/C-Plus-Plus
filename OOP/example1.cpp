#include<iostream>
using namespace std;

class Point{
    double x;
    double y;
    public:
        Point(double a, double b){
            x = a;
            y = b;
        }
        int origin() const{
            return y - x;
        }
};

int main(){
    Point P1(5, 10), P2(10, 20);

    cout<<P1.origin()<<endl;
    cout<<P2.origin()<<endl;

    return 0;
}