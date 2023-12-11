#include<iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue(){
            front = -1;
            rear = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            } 
        }

        // Function Empty
        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }else{
                return false;
            }
        }

        // Function Full
        bool isFull(){
            if(rear == 4){
                return true;
            }else{
                return false;
            }
        }

        // Function Enqueue
        void Enqueue(int val){
            if(isFull()){
                cout<<"Queue is Full"<<endl;
                return;
            }
            else if(isEmpty()){
                rear = 0;
                front = 0;
                arr[rear] = val;
            }
            else{
                rear++;
                arr[rear] = val;
            }
        }

        // Function Dequeue
        int Dequeue(){
            int x;
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
            else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
                return x;
            }
            else{
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        // Function Count
        int Count(){
            return (rear - front + 0);
        }

        // Function Display
        void Display(){
            cout<<"All values in the Queue are : "<<endl;
            for (int i = 0; i < 5; i++)
            {
                cout<<arr[i]<<" ";
            }
            
        }
};
int main(){
    Queue q1;
    int option, value;
    do{
        cout<<"What operation do you want to perform? select Number. Enter 0 to Exit"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Count"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. Clear Screen"<<endl<<endl;

        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enqueue operation \n Enter an item to enqueue in the Queue"<<endl;
                cin>>value;
                q1.Enqueue(value);
                break;
            case 2:
                cout<<"Dequeue operation called \n Dequeue value : "<<q1.Dequeue()<<endl;
                break;
            case 3:
                if(q1.isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            case 4:
                if(q1.isFull()){
                    cout<<"Queue is Full"<<endl;
                }else{
                    cout<<"Queue is not Full"<<endl;
                }
                break;
            case 5:
                cout<<"Count operation \n Count of items in Queue is : "<<q1.Count()<<endl;
                break;
            case 6:
                cout<<"Display function called - "<<endl;
                q1.Display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"Enter Proper Option number "<<endl;
        }

    }while(option != 0);

    return 0;
}