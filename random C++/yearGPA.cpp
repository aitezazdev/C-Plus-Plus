/* simple program which sir asked

#include<iostream>
using namespace std;
int main(){

    int Year, GPA;
    cout<<"What year student are you? \n 1 \n 2 \n 3 \n 4 \n ";
    cin>>Year;
    cout<<"enter GPA";
    cin>>GPA;

    if ((GPA>=2.5) && (Year==4))
    cout<<"He / She will graduate";
    if ((Year!=4) || (GPA<2.0))
    cout<<"He / She will not graduate";

    return 0;
    } */


//program which i modified

#include<iostream>
using namespace std;

int main(){

    int Year;
    float GPA;

    cout<<"What year student are you? \n 1 \n 2 \n 3 \n 4 \n ";
    cin>>Year;

    // check if Year is valid
    if ((Year > 4) || (Year < 1)) {
        cout << "Incorrect input for year. Please enter a value between 1 and 4." << endl;
        return 0; // exit the program if input is invalid
    }

    cout<<"Enter GPA: ";
    cin>>GPA;

    // check if GPA is valid
    if ((GPA > 4) || (GPA < 1)) {
        cout << "Incorrect input for GPA. Please enter a value between 1 and 4." << endl;
        return 0; // exit the program if input is invalid
    }

    // check if student will graduate
    if ((Year == 4) && (GPA >= 2.5) )
        cout<<"Congratulations! You will graduate." << endl;
    if ((Year!=4) || (GPA<2.0))
        cout<<"Sorry, you will not graduate." << endl;
    
    return 0;
}
// multiple return 0 (statements) can only be used in IF,SWITCH statements.