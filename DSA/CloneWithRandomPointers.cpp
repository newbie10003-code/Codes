#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> random = NULL;
    }
    
    ~Node(){
        cout << "Value deleted for Node: " << this -> data << endl;
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

Node* insert_at_tail(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
        return temp;
    }
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
    return;
}

int length(Node* &head){
    Node* temp = head; int i = 0;
    if (temp == NULL)
    {
        return 0;
    }
    if (temp -> next == NULL)
    {
        return 1;
    }
    while (temp != NULL)
    {
        temp = temp -> next;
        i++;
    }
    cout << "Length of the LL: " << i << endl;
    return i;
}

// Using Map
Node* clone(Node* &head, Node* &clonetail){
    Node* temp = head;
    Node* temp2 = clonetail;
    Node* t = NULL;
    map<Node*, Node*>mapping;
    while (temp != NULL)
    {
        clonetail = insert_at_tail(t, clonetail, temp -> data);
        mapping[temp] = clonetail;
        temp = temp -> next;
    }
    temp = head;
    temp2 = temp2 -> next;
    while (temp != NULL)
    {
        temp2 -> random = mapping[temp -> random];
        temp = temp -> next;
        temp2 = temp2 -> next;
    }
    return clonetail;
}

// Without map
Node* clone2(Node* &head){
    Node* temp = head;
    Node* clonehead = NULL;
    Node* clonetail = NULL;
    // Step 1: Cloning using next pointer
    while (temp != NULL)
    {
        clonetail = insert_at_tail(clonehead, clonetail, temp -> data);
        temp = temp -> next;
    }
    cout << "Clone LL:" << endl;
    display(clonehead);
    // Step 2: Modifying the LL by adding clone nodes in b/w original LL
    temp = head;
    Node* temp2 = clonehead;
    while (temp != NULL && temp2 != NULL)
    {
        Node* forward = temp -> next;
        temp -> next = temp2;
        temp = forward;
        forward = temp2 -> next;
        temp2 -> next = temp;
        temp2 = forward;
    }
    // Step 3: Copying random pointers
    temp = head;
    while (temp != NULL)
    {
        if (temp -> next != NULL)
        {
            if (temp -> random != NULL)
            {
                temp -> next -> random = temp -> random -> next;
            }
            else
            {
                temp -> next = temp -> random;
            }
        }
        temp = temp -> next -> next;
    }
    // Step 4: Reverting the changes done in step 2
    temp = head;
    temp2 = clonehead;
    while (temp != NULL && temp2 != NULL)
     {
        temp -> next = temp2 -> next;
        temp = temp -> next;
        if (temp != NULL)
        {
            temp2 -> next = temp -> next;
        }
        temp2 = temp2 -> next;
    }
    // Step 5: Return Ans
    return clonehead;
}

int main(){
    Node* head = new Node(10);
    head = insert_at_head(head, 5);
    head = insert_at_head(head, 3);
    head = insert_at_head(head, 2);
    head = insert_at_head(head, 1);
    // display(head);
    /*
    // Cloning using next pointer and then cloning the random pointers
    Node* cloneHead = new Node(-1);
    Node* clonetail = cloneHead; 
    clonetail = clone(head, clonetail);
    Node* cloneHead1 = cloneHead -> next;

    cout << "LL with dummy node:" << endl;
    display(cloneHead);
    cloneHead -> next = NULL;
    delete cloneHead;
    cout << "LL with no dummy node:" << endl;
    display(cloneHead1);
    cout << "Clone toh sahi ho rahi hai" << endl;*/

    cout << "Without Cloning: " << endl;
    display(head);

    Node* clonehead = NULL;
    clonehead = clone2(head);
    cout << "After Cloning: " << endl;
    display(clonehead);
    return 0;
}