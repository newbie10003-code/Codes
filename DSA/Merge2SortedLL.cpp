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

Node* merge2(Node* &head1, Node* &head2){
    // If only one element is present
    if (head1 -> next == NULL)
    {
        head1 -> next = head2;
        return head1;
    }
    
    Node* prev = head1;
    Node* curr = head1 -> next;
    Node* temp = head2;
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    while (curr != NULL && temp != NULL)
    {
        if (temp -> data >= prev -> data && temp -> data <= curr -> data)
        {
            Node* next = temp -> next;
            prev -> next = temp;
            temp -> next = curr;
            prev = temp;
            temp = next;
        }
        else
        {
            prev = curr;
            curr = curr -> next;
            if (curr -> next == NULL)
            {
                curr -> next = temp;
                return head1;
            }
            
        }   
    }
    return head1;
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

    // Node* head = new Node(-1);
    // Node* tail = head;
    // tail = merge1(head1, head2, tail);
    // tail -> next = NULL;
    // Node* newhead = head -> next;
    // delete head;
    // cout << "Merged LL:" << endl;
    // display(newhead);

    cout << "Merged LL2:" << endl;
    if (head1 -> data <= head2 -> data)
    {
        head1 = merge2(head1, head2);
        display(head1);
    }
    else
    {
        head1 = merge2(head2, head1);
        display(head1);
    }
    
    return 0;
}