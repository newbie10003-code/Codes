#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~ node(){
        int value = this -> data;
        if (this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for node: " << value << endl;
    }

};

void insertnode(node* &tail, int element, int d){

    //assuming that the list is empty
    if (tail == NULL)
    {
        node* temp = new node(d);
        temp -> next = temp;
        tail = temp;
    }

    //assuming that the element is present in the list
    else
    {
        node *curr = tail;
        while (curr -> data != element)
        {
            curr = curr -> next;
        }
        //element found
        node *temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
        // tail = temp;
    }
}

void print(node* &tail){
    if (tail == NULL)
    {
        cout << "Empty Linked List" <<endl;
        return;
    }
    node *temp = tail;
    cout << temp -> data << " ";
    while (temp -> next != tail)
    {
        temp = temp -> next;
        cout << temp -> data << " ";
    }
    cout << endl;
}

void deletenode(node* &tail, int element){
    
    //empty list
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    
    //non-empty list
    else
    {
        node* prev = tail;
        node* curr = prev -> next;
        while (curr -> data != element)
        {
            prev = curr;
            curr = curr -> next;
        }
        //curr is pointing to the node we want to delete
        prev -> next = curr -> next;
        if (tail == curr)
        {
            tail = curr -> next;
        }
        if (curr -> next == curr)
        {
            tail = NULL;
        }
        curr -> next = NULL;
        delete curr;
        
    }

}

int main()
{ 
    // node* node1 = new node(10);
    node* tail = NULL;
    insertnode(tail, 5, 10);
    print(tail);
    
    insertnode(tail, 10, 5);
    print(tail);
    
    insertnode(tail, 5, 15);
    print(tail);
    
    insertnode(tail, 10, 22);
    print(tail);

    deletenode(tail, 10);
    print(tail);
    cout << "Tail: " << tail -> data << endl;
    return 0;
} 