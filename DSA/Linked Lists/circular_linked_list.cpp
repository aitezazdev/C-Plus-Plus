#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

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

// Convert to Circular Linked List
void MakeCircular() {
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    // Make the last node point back to the first node to form a circle
    p->next = head;
}

// Print Function
void Print() {
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }else{
    Node* p = head;  // pointer starting from head
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
        }
    }
}
};

int main() {
    Node n1;
    int option, position, value, currentValue;
    n1.MakeCircular();

    do{
        cout<<endl;
        cout<<"What operation do you want to perform? select Number. Enter 0 to Exit"<<endl;
        cout<<"1. Add in Last of linked list"<<endl;
        cout<<"2. Add in Start of linked list"<<endl;
        cout<<"3. Add after(in Between) of linked list"<<endl;
        cout<<"4. Delete a value linked list"<<endl;
        cout<<"5. Find a value in linked list"<<endl;
        cout<<"6. Print a linked list"<<endl;
        cout<<"9. Clear Screen"<<endl;

        cin>>option;
        switch(option){
            case 1:
                cout<<"Enter an item to add in last of Linked List : "<<endl;
                cin>>value;
                n1.Add_Last(value);
                break;
            case 2:
                cout<<"Enter an item to add in start of Linked List : "<<endl;
                cin>>value;
                n1.Add_Start(value);
                break;
            case 3:
                cout<<"Enter an item to add in between(after an element) in Linked List : "<<endl;
                cin>>value;
                cout<<"You want to add "<<value<<" after which element : "<<endl;
                cin>>currentValue;
                n1.Add_After(value, currentValue);
                break;
            case 4:
                cout<<"Enter an item to delete from Linked List : "<<endl;
                cin>>value;
                n1.DeleteValue(value);
                break;
            case 5:
                cout<<"Enter a number you want to find : "<<endl;
                cin>>position;
                if (n1.FindValue(position)) {
                    cout << "Value " << position << " found in the linked list." << endl;
                } else {
                    cout << "Value " << position << " not found in the linked list." << endl;
                }
                break;
            case 6:
                n1.Print();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Enter Proper Option number "<<endl;
        }

    }while(option != 0);

    return 0;
}