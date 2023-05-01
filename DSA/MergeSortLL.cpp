#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> random = NULL;
    }
    
    ~Node(){
        cout << "Value deleted for Node: " << this -> data << endl;
    }
};

Node* insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    temp -> next = head;
    head = temp;
    return temp;
}

Node* insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        return temp;
    }
    tail -> next = temp;
    tail = temp;
    return tail;
}

void display(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    return;
}

int length(Node* &head){
    Node* temp = head; int i = 0;
    if (temp == NULL)
    {
        return 0;
    }
    if (temp -> next == NULL)
    {
        return 1;
    }
    while (temp != NULL)
    {
        temp = temp -> next;
        i++;
    }
    cout << "Length of the LL: " << i << endl;
    return i;
}

int main(){

    Node* head = new Node(1);
    head = insert_at_head(head, 11);
    head = insert_at_head(head, 3);
    head = insert_at_head(head, 8);
    head = insert_at_head(head, 5);
    head = insert_at_head(head, 9);
    display(head);

    return 0;
}