// #include<iostream>
// using namespace std;
// int main()
// {
//     int pattern;
//     int i,j;

//     cout<<"enter number = ";
//     cin>>pattern;

//     for ( i = 1; i <= pattern; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<i<<" ";
           
//         }
        
//         cout<<endl;
//     }
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int pattern;
//     int i,j;
//     int x = 1;

//     cout<<"enter number = ";
//     cin>>pattern;

//     for ( i = 1; i <= pattern; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<x<<" ";
//             x++;
           
//         }
        
//         cout<<endl;
//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main()
// {
    
//     int i,j;
//     int enter;
//     int limit;

//     cout<<"enter number from which you want to print = ";
//     cin>>enter;
//     cout<<"upto which limit = ";
//     cin>>limit;
    

//     for ( i = enter; i <= limit; i++)
//     {
//         for ( j = enter; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
        
//         cout<<endl;
//     }
//     return 0;

// }


#include<iostream>
using namespace std;
int main()
{
    
    int i,j;
    int enter;
    int limit;

    cout<<"enter number from which you want to print = ";
    cin>>enter;
    cout<<"enter ending limit = ";
    cin>>limit;

        int num;
        num = enter;

    for ( i = enter; i <= limit; i++)
    {

        for ( j = enter; j <= i; j++)
        {
            cout<<num<<" ";
             num++;
        }
        cout<<endl;
    }
    return 0;

}