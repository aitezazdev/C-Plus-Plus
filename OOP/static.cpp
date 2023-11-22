#include<iostream>
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
        static int area;
    public:
        Rectangle(double L, double W){
            length = L;
            width = W;
        }
        void CalculateArea(){
            area = length * width;
            cout << "Length: " << length << ", Width: " << width << endl;
        }
        int GetArea(){
            CalculateArea();
            return area;
        }
};
int Rectangle :: area;

int main(){
    Rectangle R1(5, 4);
    cout<<"Area is = "<<R1.GetArea();
    return 0;
}