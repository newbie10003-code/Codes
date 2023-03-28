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
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    temp -> next = head;
    head = temp;
    return temp;
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
    Node* temp = head;
    int i = 0;
    while (temp != NULL)
    {
        temp = temp -> next;
        i++;
    }
    cout << "Length of LL: " << i << endl;
    return i;
}

bool palin(Node* &head, Node* &newHead){
    Node* temp = head;
    while (temp != NULL)
    {
        newHead = insert_at_head(newHead, temp -> data);
        temp = temp -> next;
    }
    temp = head;
    cout << "Head of Reversed LL:" << newHead -> data << endl;
    while (temp != NULL && newHead != NULL)
    {
        if (temp -> data != newHead -> data)
        {
            return false;
        }
        else
        {
            temp = temp -> next;
            newHead = newHead -> next;
        }
    }
    return true;
}

bool palin2(Node* &head, int length){
    int mid = length/2;
    int i = 0;
    Node* temp = head;
    // Finding Mid
    while (i < mid)
    {
        temp = temp -> next;
        i++;
    }
    cout << "Middle Element: " << temp -> data << endl;
    // Reversing 2nd Half of the LL
    Node* prev = NULL;
    Node* curr = temp;
    Node* forward = NULL;
    while (curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    cout << "Head of reversed LL: " << prev -> data << endl;
    curr = prev;
    // Reversed LL
    cout << "Reversed LL: " << endl;
    while (prev != NULL)
    {
        cout << prev -> data << " ";
        prev = prev -> next;
    }cout << endl;
    // Seedhi LL
    i = 0; temp = head;
    cout << "Seedhi LL:" << endl;
    while (i < mid)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
        i++;
    }
    cout << endl;
    // Compare data
    prev = curr;
    temp = head;
    i = 0;
    while (i < mid && prev != NULL)
    {
        if (temp -> data != prev -> data)
        {
            return false;
        }
        else
        {
            temp = temp -> next;
            prev = prev -> next;
        }
        i++;
    }
    return true;
}

int main()
{
    Node* head = new Node(10);
    head = insert_at_head(head, 5);
    head = insert_at_head(head, 0);
    head = insert_at_head(head, 5);
    head = insert_at_head(head, 10);
    // head = insert_at_head(head, 1);
    int l = length(head);
    cout << "LL:" << endl;
    display(head);
    // Node* newhead = NULL;
    cout << "If palindrome or not: " << palin2(head, l) << endl;

    return 0;
}