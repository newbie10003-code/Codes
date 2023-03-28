//Linked List - Linear data structure which is a collection of nodes.

//A node contains data and address of next node

//Advantages of LL - Dynamic DS, No memory wastage, Insertion and deletion is easy than an array. 

//Types - Singly LL, Doubly LL, Circular LL, Circular Doubly LL

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

int getlength(node* &head){
    node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    cout << "Count: " << count << endl;
    return count;
}

void mid(node* &head, int length){
    node* temp = head;
    int cnt = 1;
    while (cnt < (length/2)+1)
    {
        temp = temp -> next;
        cnt++;
    }
    cout << "Middle of the LL: " << temp -> data << endl;
}

void mid_opt(node* &head){
    if (head == NULL || head -> next == NULL)
    {
        cout << "Middle of LL: " << head -> data << endl;
        return;
    }
    if (head -> next -> next == NULL)
    {
        cout << "Middle of LL: " << head -> next -> data << endl;
        return;
    }
    node* pro = head;
    node* noob = head;
    while (pro != NULL)
    {
        noob = noob -> next;
        pro = pro -> next -> next;
    }
    cout << "Middle of LL: " << noob -> data << endl;
}

int main()
{
    
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insert_at_head(head,tail, 30);
    print(head, tail);
    insert_at_head(head,tail, 5);
    print(head, tail);
    insert_at_tail(head, tail, 20);
    print(head, tail);
    insert_at_mid(tail, head, 1, 12);
    print(head, tail);
    insert_at_mid(tail, head, 5, 12);
    print(head, tail);
    int l = getlength(head);
    mid_opt(head);
    // deletenode(head,tail, 5);
    // print(head, tail);
    return 0;
}