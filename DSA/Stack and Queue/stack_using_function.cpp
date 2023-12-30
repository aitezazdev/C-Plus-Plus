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
    s1.Push(10);
    s1.Push(20);
    s1.Push(30);
    s1.Push(40);
    s1.Push(50);
    s1.Display();

    s1.Pop();
    s1.Pop();
    s1.Display();

    cout<<"Value at top is : "<<s1.Top();

    cout<<"\nCount is : "<<s1.Count();

    if(s1.isEmpty()){
        cout<<"\nStack is empty"<<endl;
    }else{
        cout<<"\nStack is not empty"<<endl;
    }

    if(s1.isFull()){
        cout<<"Stack is Full"<<endl;
    }else{
        cout<<"Stack is not Full"<<endl;
    }
    return 0;
}