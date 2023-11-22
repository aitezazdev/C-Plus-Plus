using namespace std;
#include<iostream>

class Rectangle{
        int length;
        int width;
        int area;
    public:
        Rectangle(int l, int w){
            length = l;
            width = w;
            cout<<"Length is : "<<length<<endl;
            cout<<"width is : "<<width<<endl;
        }
        int GetData(){
            area = length * width;
            return area;
        }
};
int main(){
    Rectangle array[3] = {Rectangle(5, 10), Rectangle(5, 10), Rectangle(5, 10)};
    cout<<"Area is : "<<array[0].GetData()<<endl;
    cout<<"Area is : "<<array[1].GetData()<<endl;
    cout<<"Area is : "<< array[2].GetData()<<endl;

    return 0;
}


// #include<iostream>
// using namespace std;

// class Rectangle{
//         int length;
//         int width;
//         int area;
//     public:
//         void SetData(int l, int w){
//             length = l;
//             width = w;
//             cout<<"Length is : "<<length<<endl;
//             cout<<"width is : "<<width<<endl;
//         }
//         int GetData(){
//             area = length * width;
//             return area;
//         }
// };
// int main(){
//     Rectangle obj1, obj2, obj3;
//     Rectangle array[3] = {obj1, obj2, obj3};
//     array[0].SetData(5, 10);
//     cout<<"Area is : "<<array[0].GetData()<<endl;
//     array[1].SetData(5, 10);
//     cout<<"Area is : "<<array[1].GetData()<<endl;
//     array[2].SetData(5, 10);
//     cout<<"Area is : "<< array[2].GetData()<<endl;

//     return 0;
// }