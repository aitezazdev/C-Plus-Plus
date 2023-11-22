#include<iostream>
using namespace std;

class Circle{
    private:
        int area;
        int radius;

    public:
        Circle(){
            radius = 0;
        }
        Circle(int r){
            radius = r;
        }

    private:
        void CalculateArea(){
            area = 3.14 * radius * radius;
        }

    public:
        void ShowArea(){
            CalculateArea();

            cout<<"Your input radius is = "<<radius<<endl;
            cout<<"And Area is = "<<area<<endl;
        }
};

int main(){
    int cinradius;
    cout<<"Enter radius for Circle two = ";
    cin>>cinradius;

    Circle C1, C2(cinradius);
    C1.ShowArea();
    C2.ShowArea();

    return 0;
}