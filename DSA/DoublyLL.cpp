#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node* prev;
    int data;
    node* next;

    //Constructor
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;
        if (this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory freed for node: " << value << endl;
    }
};

void print(node* &head){
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getlength(node* &head){
    node* temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

void insert_at_head(node* &head, node* &tail, int d){
    
    if (head == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        node* next = head;
        next -> prev = temp;
        temp -> prev = NULL;
        temp -> next = head;
        head = temp;
    }
    
}

void insert(node* &head, int val, int pos){
    node* toinsert = new node(val);
    if (pos == 1)
    {
        toinsert -> next = head;
        head -> prev = toinsert;
        head = toinsert;
    }
}

void insert_at_tail(node* &head, node* &tail, int d){
    
    if (tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        temp -> prev = tail;
        temp -> next = NULL;
        tail -> next = temp;   
        tail = temp;
    }

}

void insert_at_position(node* &head, node* &tail, int pos, int d){
    
    if (pos == 1)
    {
        insert_at_head(head, tail, d);
        return;
    }

    if (pos == getlength(head)+1)
    {
        insert_at_tail(head, tail, d);
        return;
    }

    node* node_to_insert = new node(d);
    node* temp = head;
    int cnt = 1;
    while (cnt < pos-1)
    {
        temp = temp -> next;
        cnt++;
    }
    node_to_insert -> prev = temp;
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;
    temp -> next -> prev = node_to_insert;

}

void deletion(node* &head, node* &tail, int pos){
    int cnt = 1;
    if (pos == 1)
    {
        node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        node* prev = NULL;
        node* curr = head;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next -> prev = prev;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
        if (prev -> next == NULL)
        {
            tail = prev;
        }  
    }

}

int main()
{

    node* node1 = new node(30);
    node* head = node1;
    node* tail = node1;
    // print(head);
    // insert_at_head(head, tail, 20);
    // print(head);
    // insert_at_tail(head, tail, 8);
    // print(head);
    // insert_at_position(head, tail, 4, 15);
    // print(head);
    // deletion(head, tail, 1);
    // print(head);
    insert(head, 10, 1);
    print(head);
    cout << "At head: " << head -> data << endl;
    cout << "At tail: " << tail -> data << endl;
    return 0;

}