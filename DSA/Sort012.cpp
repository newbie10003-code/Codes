#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data =d;
        this -> next = NULL;
    }
};

Node* insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return temp;
    }
    temp -> next = head;
    head = temp;
    return head;
}

Node* insert_value_at_tail(Node* &tail, int d){
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

Node* insert_node_at_tail(Node* &tail, Node* &temp){
    tail -> next = temp;
    tail = temp;
    return tail;
}

void display_singly(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Counting Approach
Node* sort012(Node* &head){
    int zero = 0;
    int one = 0;
    int two = 0;
    Node* temp = head;
    if (head == NULL || head -> next == NULL)
    {
        return head;
    }
    while (temp != NULL)
    {
        if (temp -> data == 0)
        {
            zero++;
        }
        if (temp -> data == 1)
        {
            one++;
        }
        if (temp -> data == 2)
        {
            two++;
        }
        temp = temp -> next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zero > 0)
        {
            temp -> data = 0;
            zero--;
        }
        else if (one > 0)
        {
            temp -> data = 1;
            one--;
        }
        else
        {
            temp -> data = 2;
            two--;
        }
        temp = temp -> next;
    }
    return head;
}

// Creating 3 different linked lists
Node* sort012_1(Node* &head){
    if (head == NULL || head -> next == NULL)
    {
        cout << "Empty LL Or Single Node LL" << endl;
        return head;
    }
    Node* temp = head;
    
    Node* zero_head = new Node(-1);
    Node* zero_tail = zero_head;
    
    Node* one_head = new Node(-1);
    Node* one_tail = one_head;
    
    Node* two_head = new Node(-1);
    Node* two_tail = two_head;

    while (temp != NULL)
    {
        if (temp -> data == 0)
        {
            zero_tail = insert_node_at_tail(zero_tail, temp);
        }
        if (temp -> data == 1)
        {
            one_tail = insert_node_at_tail(one_tail, temp);
        }
        if (temp -> data == 2)
        {
            two_tail = insert_node_at_tail(two_tail, temp);
        }
        temp = temp -> next;
    }
    if (zero_head -> next == NULL)
    {
        one_tail -> next = two_head -> next; 
        two_tail -> next = NULL;
        head = one_head -> next;    
    }
    if (one_head -> next == NULL)
    {
        zero_tail -> next = two_head -> next;
        two_tail -> next = NULL;
        head = zero_head -> next;
        delete zero_head;
        delete one_head;
        delete two_head;
    }
    if (two_head -> next == NULL)
    {
        zero_tail -> next = one_head -> next;
        one_tail -> next = NULL;
        head = zero_head -> next;
        delete zero_head;
        delete one_head;
        delete two_head;
    }
    else
    {
        zero_tail -> next = one_head -> next;
        one_tail -> next = two_head -> next;
        two_tail -> next = NULL;
        head = zero_head -> next;
        delete zero_head;
        delete one_head;
        delete two_head;
    }
    return head;
}

int main()
{
    Node* head = new Node(0);
    head = insert_at_head(head, 2);
    head = insert_at_head(head, 1);
    head = insert_at_head(head, 0);
    head = insert_at_head(head, 1);
    head = insert_at_head(head, 2);
    cout << endl;
    
    cout << "Unsorted LL:" << endl;
    display_singly(head);
    cout << endl;
    
    head = sort012_1(head);
    cout << "Sorted LL:" << endl;
    display_singly(head);
    cout << endl;
    
    return 0;
}