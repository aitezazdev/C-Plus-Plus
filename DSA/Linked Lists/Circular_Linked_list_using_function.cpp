#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

// Add at Last
void Add_Last(int v) {
    Node* tmp = new Node;
    tmp->data = v;
    tmp->next = NULL;

    if (head == NULL) {
        head = tmp;
    } else {
        Node* p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = tmp;
    }
}

// Add in Start
void Add_Start(int val){
    Node * tmp = new Node();
    tmp->data = val;
    tmp->next = head;
    head = tmp;
}

// Add in Between
void Add_After(int NewValue, int CurrentValue){
    Node * tmp = new Node();
    tmp->data = NewValue;
    tmp->next = NULL;

    Node * p = head;
    while (p != NULL && p->data != CurrentValue){
        p = p->next;
    }
    if(p != NULL){
        tmp->next = p->next;
        p->next = tmp;
    } else {
        cout<<"Not Found"<<endl;
    }
}

// Deletion in Linked List
void DeleteValue(int num) {
    Node* current = head;
    Node* previous = NULL;

    while (current != NULL && current->data != num) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Value not found in the linked list." << endl;
        return;
    }

    if (previous != NULL) { 
        previous->next = current->next;
    } else {
        head = current->next;
    }

    delete current;
}

// Print Function
void Print(int iterations) {
    Node* p = head;
    int count = 0;

    while (p != NULL && count < iterations) {
        cout << p->data << " ";
        p = p->next;
        ++count;
    }
}

// Convert to Circular Linked List
void MakeCircular() {
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    // Make the last node point back to the first node to form a circle
    p->next = head;
}

int main() {
    Add_Last(5);
    Add_Last(10);
    Add_Last(15);
    Print(5);
    cout << endl;

    Add_Start(1);
    Print(5);
    cout << endl;

    Add_After(100, 10);
    Print(5);
    cout << endl;

    MakeCircular(); // Convert to circular linked list

    // Print the circular linked list for a few iterations
    cout << "Circular Linked List (printing for a few iterations):" << endl;
    Print(10);

    return 0;
}