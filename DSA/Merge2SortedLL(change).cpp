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
};

Node* insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
    }
    temp -> next = head;
    head = temp;
    return head;
}

Node* insert_at_tail(Node* &tail, Node* temp){
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
}

Node* merge1(Node* &head1, Node* &head2, Node* &tail){
    while (head1 != NULL && head2 != NULL)
    {
        if (head1 -> data < head2 -> data)
        { 
            tail = insert_at_tail(tail, head1);
            head1 = head1 -> next;
        }
        else if (head1 -> data > head2 -> data)
        {
            tail = insert_at_tail(tail, head2);
            head2 = head2 -> next;
        }
        else if (head1 -> data == head2 -> data)
        {
            tail = insert_at_tail(tail, head1);
            head1 = head1 -> next;
            tail = insert_at_tail(tail, head2);
            head2 = head2 -> next;
        }
    }
    while (head1 != NULL)
    {
        tail = insert_at_tail(tail, head1);
        head1 = head1 -> next;
    }
    while (head2 != NULL)
    {
        tail = insert_at_tail(tail, head2);
        head2 = head2 -> next;
    }
    return tail;
}

int main()
{
    // First LL
    Node* head1 = new Node(5);
    head1 = insert_at_head(head1, 4);
    head1 = insert_at_head(head1, 3);
    head1 = insert_at_head(head1, 2);
    head1 = insert_at_head(head1, 1);
    cout << endl << "First LL:" << endl;
    display(head1);

    // Second LL
    Node* head2 = new Node(7);
    head2 = insert_at_head(head2, 6);
    head2 = insert_at_head(head2, 5);
    head2 = insert_at_head(head2, 4);
    head2 = insert_at_head(head2, 3);
    cout << endl << "Second LL:" << endl;
    display(head2);
    cout << endl;

    Node* head = new Node(-1);
    Node* tail = head;
    tail = merge1(head1, head2, tail);
    tail -> next = NULL;
    Node* newhead = head -> next;
    delete head;
    display(newhead);
    
    return 0;
}