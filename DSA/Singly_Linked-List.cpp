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
        Node* p = head;   // p is to iterate to the last element
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
    tmp->next = NULL;
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
    }else{
        cout<<"Not Found"<<endl;
    }
}

// Deletion in Linked List
void DeleteValue(int num) {
    Node* current = head;
    Node* previous = NULL;
    // Search for the node with the specified value
    while (current != NULL && current->data != num) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) { // current reaches the end of list
        cout << "Value not found in the linked list." << endl;
        return;
    }
    // Update pointers to bypass the node
    if (previous != NULL) { 
        // If the node to be deleted is not the head cz it moves and its value is updated
        // and so value of previous is not more NULL
        previous->next = current->next;
    } else {
        // If the node to be deleted is the head. This means previous will be NULL here
        head = current->next;
    }
    // Free the memory occupied by the node
    delete current;
}

// Find a value in the Linked List
bool FindValue(int val) {
    Node* p = head;
    while (p != NULL) {
        if (p->data == val) {
            // Value found in the linked list
            return true;
        }
        p = p->next;
    }
    // Value not found in the linked list
    return false;
}

// Print Function
void Print() {
    Node* p = head;  // pointer starting from head
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    Add_Last(5);
    Add_Last(10);
    Add_Last(15);
    Print();
    cout<<endl;

    Add_Start(1);
    Print();
    cout<<endl;

    // Add_After(100, 102);
    Add_After(100, 10);
    Print();
    cout<<endl;

    int valueToFind = 10;
    if (FindValue(valueToFind)) {
        cout << "Value " << valueToFind << " found in the linked list." << endl;
    } else {
        cout << "Value " << valueToFind << " not found in the linked list." << endl;
    }
    DeleteValue(15);
    Print();
    return 0;
}