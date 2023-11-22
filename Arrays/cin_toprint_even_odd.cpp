// #include<iostream>
// using namespace std;
// int main(){

//     int list[5];
//     int i;
//     int even=0;
//     int odd=0;

//     for ( i = 0; i < 5  ; i++)
//     {
//        cout<<"enter an integer value in list ["<<i<<"]= ";
//        cin>>list[i];

//        if(list[i] % 2 == 0)
//        even++;

//        else
//        odd++;
//     }

//     cout<<"The even numbers are = "<<even<<endl;
//     cout<<"The odd numbers are = "<<odd;

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int size;
    int even=0;
    int odd=0;
     int list[size];
     

    cout<<"enter size of an array = ";
    cin>>size;



    for(int i = 0; i < size  ; i++)
    {
       cout<<"enter an integer value in list ["<<i<<"]= ";
       cin>>list[i];

       if(list[i] % 2 == 0)
       even++;

       else
       odd++;
    }

    cout<<"The even numbers are = "<<even<<endl;
    cout<<"The odd numbers are = "<<odd;

    return 0;
}