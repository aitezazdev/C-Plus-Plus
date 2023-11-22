#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int width;
        static int area;
    public:
        Rectangle(int L, int W){
            length = L;
            width = W;
            CalculateArea();
        }
    void CalculateArea(){
        area = length * width;
        cout<<"area is = "<<area;
        }
};
int Rectangle :: area;

int main(){
    Rectangle R1(3, 4);
    return 0;
}