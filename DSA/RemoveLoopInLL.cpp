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

void insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp -> next = head;
    head = temp;
    return;
}

void insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void display(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }cout << endl;
}

// Brute Force Approach

bool detectloop(Node* &head){
    if (head == NULL)
    {
        return false;
    }
    map < Node*, bool > visited;
    Node* temp = head;
    do
    {
        if (visited[temp] == true)
        {
            cout << "Present at element " << temp -> data << endl;
            return true;
        }
        else
        {
            visited[temp] = true;
        }
        temp = temp -> next;
    } while (temp != NULL);
    return false;    
}

// Floyd's Cycle Detection Algorithm - 2 Pointers slow and fast, if they meet at some point then the LL is cyclic

// bool detectloop(Node* &head){
//     if (head == NULL)
//     {
//         return false;
//     }
//     Node* slow = head;
//     Node* fast = head;
//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast -> next;
//         if (fast != NULL)
//         {
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//         if (slow == fast)
//         {
//             cout << "Present at element: " << slow -> data << endl;
//             return true;
//         }
//     }
//     return false;
// }

// BruteForce Approach

// void removeloop(Node* &head){
//     if (head == NULL)
//     {
//         cout << "Empty LL" << endl;
//         return;
//     }
//     map < Node*, bool > visited;
//     Node* prev = NULL;
//     Node* temp = head;
//     do
//     {
//         if (visited[temp] == true)
//         {
//             cout << "Present at element " << temp -> data << endl;
//             prev -> next = NULL;
//             cout << "Loop removed! Node " << prev -> data << " points to NULL" << endl;
//             return;
//         }
//         else
//         {
//             visited[temp] = true;
//         }
//         prev = temp;
//         temp = temp -> next;
//     } while (temp != NULL);
//     return;    
// }

// Removing Loop Using Floyd's Cycle Detection Algorithm

void removeloop(Node* &head){
    Node* slow  = head;
    Node* fast  = head;
    bool flag = false;
    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if (fast != NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next;
        if (fast == slow)
        {
            cout << "Cycle is present" << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "No Cycle is present" << endl;
        return;
    }
    slow = head;
    Node* prev = NULL;
    while (slow != fast)
    {
        prev = fast;
        slow = slow -> next;
        fast = fast -> next;
    }
    cout << "Start of Cycle At: " << slow -> data << endl;
    prev -> next = NULL;
}

int main()
{
    Node* head = new Node(0);
    Node* tail = head;
    
    insert_at_head(head, 1);
    insert_at_tail(tail, 2);
    insert_at_tail(tail, 3);
    insert_at_head(head, 4);
    insert_at_tail(tail, 5);
    insert_at_head(head, 6);
    
    cout << "LL: " << endl;
    display(head);
    
    // tail -> next = head -> next;
    // cout << "Whether LL is cyclic or not: " << detectloop(head) << endl;
    // cout << endl;
    
    removeloop(head);
    cout << endl;
    cout << "LL: " << endl;
    display(head);
    
    return 0;
}