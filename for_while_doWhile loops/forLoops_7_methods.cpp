/*1
#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=20; i<=50; i+=2)
	{
		cout<<i<<" ";
	}
	return 0;
}  */

/*2
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=50; i>=20; i-=2)
   {
	 cout<<i<<" ";
	}
	return 0;
}
*/

/*3
#include<iostream>
using namespace std;
int main(){
	
	int i=20;
	for( ; i<=50; i+=2 )
	{
		cout<<i<<" ";
	}
	return 0;
}
*/

/*4
#include<iostream>
using namespace std;
int main(){
	
	int i=20;
	for( ; i<=50 ; )
	{
		cout<<i<<" ";
		i+=2;
	}
	return 0;
}
*/


/*5
#include<iostream>
using namespace std;
int main(){	
	int i;	
	for( i=20 ; i<=50 ; )
	{
		cout<<i<<" ";
		i+=2;
	}
	return 0;
}
*/

/*6
#include<iostream>
using namespace std;
int main(){	
	int i;
	for(i=20; i<=50 ; i++)
	{
		if(i%2 == 0)
		cout<<i<<" ";
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int list[5];
	int i;
    int even = 0;
	int odd = 0;
	
	for ( i = 0; i < 5  ; i++)
    {
       cout<<"enter an integer value in list ["<<i<<"]= ";
       cin>>list[i];

       if(list[i] % 2 == 0)
       even++;

       if(list[i] % 2 != 0)
       odd++;
    }

    cout<<"The even numbers are = "<<even<<endl;
    cout<<"The odd numbers are = "<<odd;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int list[5];
	int i;
	int even = 0;
	int odd = 0;
	
	for ( i = 0; i < 5  ; i++)
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
*/


 /*  int number;

    cout <<"Enter a number: ";
    cin >> number;
    
    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << "The number is " << result << endl;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main() {
    int list[5];
    int i;
    int even = 0;
    int odd = 0;

    for (i = 0; i < 5; i++) {
        cout << "Enter an integer value in list [" << i << "]= ";
        cin >> list[i];

    string number = (list[i] % 2 == 0) ? "Even" : "Odd";
        
        if (number == "Even") 
		{
            even++;
        } 
		else 
		{
            odd++;
        }
    }

    cout << "The even numbers are = " << even << endl;
    cout << "The odd numbers are = " << odd;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){
	
	int i;
	int x;
	int z = 0;
	
	for(i=20; i<=50; i++)
	{
		x=i;
		x = (i % 2 == 0) ? x : z ;
		cout<<i<<" ";
	}
	return 0;
}
*/