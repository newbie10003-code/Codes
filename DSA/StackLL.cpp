#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        cout << "Value deleted for Node: " << this -> data << endl;
    }
};

Node* push(Node* &top){
    cout << "Enter the value to be pushed: " << endl;
    int d; cin >> d;
    Node* temp = new Node(d);
    if (top == NULL)
    {
        top = temp;
        return top;
    }
    temp -> next = top;
    top = temp;
    return top;
}

Node* pop(Node* &top){
    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return top;
    }
    if (top -> next == NULL)
    {
        cout << "Removing last element from the stack: " << top -> data << endl;
        delete top;
        return NULL;
    }
    Node* temp = top;
    top = top -> next;
    temp -> next = NULL;
    delete temp;
    return top;
}

void display(Node* &top){
    Node* temp = top;
    if (top == NULL)
    {
        cout << "Empty Stack" << endl;
        return;
    }
    cout << "Stack: " << endl;
    while (temp != NULL)
    {
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
    cout << endl;
    return;
}

void peek(Node* &top){
    if (top == NULL)
    {
        cout << "Empty Stack" << endl;
        return;
    }
    cout << "Top Element: " << top -> data << endl;
    return;
}

int main()
{
    Node* top = NULL; int ch;
    do
    {
        cout << "Enter: \n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            peek(top);
            break;
        case 5:
            exit(0);
        default:
            cout << "Wrong Input" << endl;
            break;
        }
    } while (1);
    return 0;
}