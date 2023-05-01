#include<bits/stdc++.h>
using namespace std;

class node{

    public:

    int data;
    node* next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
    }

    //Destructor
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

void insert_at_head(node* &head, node* &tail, int d){
    if (head == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(d);
        temp -> next = head;
        head = temp;
    }

}

void print(node* &head, node* &tail){

    node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
    cout << endl;
}

void insert_at_tail(node* &head, node* &tail, int d){
    if (tail == NULL)
    {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    else{
        node *temp = new node(d);
        tail -> next = temp;
        temp -> next = NULL;
        tail = temp;
    }

}

void insert_at_mid(node* &tail, node* &head, int pos, int d){
    node* temp = head;
    node* node_to_insert = new node(d);
    if (pos == 1)
    {
        insert_at_head(head, tail, d);
        return;
    }
    int cnt = 1;
    while (cnt < pos-1)
    {
        temp = temp -> next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insert_at_tail(head, tail, d);
        return;
    }
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;
}

void deletenode(node* &head,node* &tail, int pos){
    if (pos == 1)
    {
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        if (prev -> next == NULL)
        {
            tail = prev;
        }
        
    }
}

void reverse(node* &head, node* &tail){
    node* prev = NULL;
    node* curr = head;
    tail = curr;
    node* forward = curr -> next;
    while (curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

void reverse1(node* &head, node* curr, node* prev){
    if(curr == NULL)
    {
        head = prev;
        return;
    }
    node* forward = curr -> next;
    curr -> next = prev;
    reverse1(head, forward, curr);
}

node* reverse2(node* &head){
    if (head == NULL || head -> next == NULL)
    {
        return head;
    }
    node* chotahead = reverse2(head -> next);
    head -> next -> next = head;
    head  -> next = NULL;
    return chotahead;
}

int main()
{   
    node* head = NULL;
    node* tail = NULL;
    
    insert_at_head(head, tail, 10);
    
    insert_at_head(head, tail, 5);
    
    insert_at_head(head, tail, 3);
    
    insert_at_head(head, tail, 2);
    
    insert_at_head(head, tail, 1);
    print(head, tail);

    // reverse(head, tail);
    // print(head, tail);

    tail = head;
    reverse1(head, head, NULL);
    print(head, tail);
    
    // head = reverse2(head);
    // print(head, tail);

    return 0;
}