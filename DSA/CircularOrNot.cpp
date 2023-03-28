#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

Node* insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    return temp;
}

void make_circular(Node* &head){
    Node* temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = head;
}

int a=20;

void print(Node* &head){
    Node* temp = head;
    while (temp -> next != NULL && temp -> next != head)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << temp -> data << endl;
    return;
}

bool IsCircular(Node* &head){
    Node *temp = head;
    if (head == NULL || temp -> next == head)
    {
        return true;
    }
    if (temp -> next == NULL)
    {
        return false;
    }
    while (temp -> next != NULL || temp -> next != head)
    {
        temp = temp -> next;
        if (temp -> next == NULL)
        {
            return false;
        }
        if (temp -> next == head)
        {
            return true;
        }
    }
}

int main()
{
    Node* head = NULL;

    head = insert_at_head(head, 10);
    
    head = insert_at_head(head, 9);
    
    head = insert_at_head(head, 8);
    
    head = insert_at_head(head, 7);
    
    head = insert_at_head(head, 6);
    
    head = insert_at_head(head, 5);
    
    make_circular(head);
    
    bool flag = IsCircular(head);
    
    cout << "flag: " << flag << endl;
    
    cout << "Printing the LL: " << endl;
    print(head);

    return 0;
}