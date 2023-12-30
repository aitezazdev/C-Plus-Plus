#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int arr[5];

    public:
        Stack(){
            top = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0; // creating stack but everything at first must be zero
            }       
        }
    
    // Funcion for Empty
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    // Function for Full
    bool isFull(){
        if( top == 4){
            return true;
        }else{
            return false;
        }
    }

    //Function for Push
    void Push(int val){
        if(isFull()){
            cout<<"Stack Oveflow"<<endl;
        }
        else{
            top++;
            arr[top] = val;
        }
    }
    
    //Function for POP
    int Pop(){      // int type function bc we have to return it
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }else{
            int popVal = arr[top];
            arr[top] = 0;
            top--;
            return popVal;
        }
    }

    // Function for Count
    int Count(){
        return(top+1);
    }

    // Function for Peek
    int Peek(int pos){
        if(isEmpty()){
            cout<<"Stack UNderflow"<<endl;
        }else{
            return arr[pos];
        }
    }

    // Function for Top
    int Top() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot retrieve top value." << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

    // Function for Change
    void Change(int pos, int val){
        arr[pos] = val;
        cout<<"Value Changed at location "<<pos<<endl;
    }

    // function for Display
    void Display(){
        cout<<"All values in the stack are : "<<endl;
        for(int i = 4; i >= 0; i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    Stack s1;
    int option, position, value;

    do{
        cout<<"What operation do you want to perform? select Number. Enter 0 to Exit"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Peek"<<endl;
        cout<<"6. Count"<<endl;
        cout<<"7. Change"<<endl;
        cout<<"8. Display"<<endl;
        cout<<"9. Clear Screen"<<endl;
        cout<<"10. Top of the stack value "<<endl<<endl;

        cin>>option;
        switch(option){
            case 1:
                cout<<"Enter an item to push in the stack"<<endl;
                cin>>value;
                s1.Push(value);
                break;
            case 2:
                cout<<"Pop function called - \n Poped value : "<<s1.Pop()<<endl;
                break;
            case 3:
                if(s1.isEmpty()){
                    cout<<"Stack is empty"<<endl;
                }else{
                    cout<<"Stack is not empty"<<endl;
                }
                break;
            case 4:
                if(s1.isFull()){
                    cout<<"Stack is Full"<<endl;
                }else{
                    cout<<"Stack is not Full"<<endl;
                }
                break;
            case 5:
                cout<<"Enter position of item you want to peek : "<<endl;
                cin>>position;
                cout<<"Peek Function called - value at position "<<position<<" is "<<endl<<s1.Peek(position)<<endl;
                break;
            case 6:
                cout<<"count function called - number of items in the stack are "<<s1.Count()<<endl;
                break;
            case 7:
                cout<<"Change Function called - "<<endl;
                cout<<"Enter position of item you want to change : ";
                cin>>position;
                cout<<endl;
                cout<<"Enter value of item you want to change : ";
                cin>>value;
                s1.Change(position, value);
                break;
            case 8:
                cout<<"Display function called - "<<endl;
                s1.Display();
                break;
            case 9:
                system("cls");
                break;
            case 10:
                cout << "Top function called - Top value in the stack is: " << s1.Top() << endl;
                break;
            default:
                cout<<"Enter Proper Option number "<<endl;
        }

    }while(option != 0);

    return 0;
}