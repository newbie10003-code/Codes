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

Node* insert_at_head(Node* head, int d){
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

Node* make_circular(Node* head){
    Node* temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = head;
    cout << "LL is now Circular" << endl;
    return head;
}

Node* make_singly(Node* head){
    Node* temp = head;
    while (temp -> next != head)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;
    cout << "LL is now Singly" << endl;
    return head;
}

void display_singly(Node* head){
    cout << "LL:" << endl;
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }cout << endl;
    return;
}

void display_circular(Node* head){
    cout << "LL:" << endl;
    Node* temp = head;
    while (temp -> next != head)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << temp -> data << endl;
    return;
}

int getlength(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp -> next != head)
    {
        count++;
        temp = temp -> next;
    }
    count++;
    cout << "Length of LL: " << count << endl;
    return count;
}

Node* split_LL(Node* &head, int length){
    Node* prev = NULL;
    Node* temp = head;
    int count = 0;
    if (length%2 == 0)
    {
        length = length/2 - 1;
    }
    else
    {
        length = length/2;
    }
    while (count <= length)
    {
        prev = temp;
        temp = temp -> next;
        count++;
    }
    cout << "Prev: " << prev -> data << endl;
    prev -> next = NULL;
    cout << "Currently at node: " << temp -> data << endl;
    Node* temp2 = temp;
    while (temp2 -> next != head)
    {
        temp2 = temp2 -> next;
    }
    temp2 -> next = NULL;
    return temp;
}

int main()
{
    int length;
    Node* head = new Node(1);
    head = insert_at_head(head, 4);
    head = insert_at_head(head, 3);
    head = insert_at_head(head, 2);
    head = insert_at_head(head, 1);
    head = insert_at_head(head, 0);
    
    head = make_circular(head);
    display_circular(head);
    
    length = getlength(head);
    Node* head2 = split_LL(head, length);

    cout << "First LL: " << endl;
    display_singly(head);

    cout << "Second LL: " << endl;
    display_singly(head2);

    return 0;
}