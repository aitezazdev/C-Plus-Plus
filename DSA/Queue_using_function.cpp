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
            // Check if there is only one element in the queue
            else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
                return x;
            }
             // If there are more than one element in the queue
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
            cout<<"\nAll values in the Queue are : "<<endl;
            for (int i = 4; i >= 0 ; i--)
            {
                cout<<arr[i]<<" ";
            }    
        }

        // Front element
        int Front() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot retrieve front value." << endl;
            return 0;
        } else {
            return arr[front];
        }
    }
};
int main(){
    Queue q1;
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    q1.Enqueue(50);
    q1.Display();

    q1.Dequeue();
    q1.Display();

    cout<<"Value at Front is : "<<q1.Front();

    cout<<"\nCount is : "<<q1.Count();

    if(q1.isEmpty()){
        cout<<"\nQueue is empty"<<endl;
    }else{
        cout<<"\nQueue is not empty"<<endl;
    }

    if(q1.isFull()){
        cout<<"Queue is Full"<<endl;
    }else{
        cout<<"Queue is not Full"<<endl;
    }
    return 0;
}