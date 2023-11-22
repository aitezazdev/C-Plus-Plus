#include<iostream>
using namespace std;

class Shape{
    protected:
        double area;
        double length;
        double width;
    public:
        int CalculateArea(double l, double w){
            length = l;
            width = w;
            area = length * width;
            return area; 
        }
};

class Rectangle : public Shape{
    public:
        int CalculateArea(double l, double w){
            length = l;
            width = w;
            area = length * width;
            return area;
        }
};
int main(){
    Rectangle obj;
    cout<<"Rectangle area is : "<<obj.CalculateArea(5,4)<<endl;
    cout<<"Shape area is : "<<obj.Shape :: CalculateArea(6, 5)<<endl;

    return 0;
}