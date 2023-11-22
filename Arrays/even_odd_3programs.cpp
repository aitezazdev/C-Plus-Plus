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

        switch (list[i] % 2) {
            case 0:
                even++;
                break;
            case 1:
                odd++;
                break;
        }
    }

    cout << "The even numbers are = " << even << endl;
    cout << "The odd numbers are = " << odd;

    return 0;
}
