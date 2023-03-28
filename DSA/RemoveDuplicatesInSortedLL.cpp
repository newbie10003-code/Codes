#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *&head)
{
    cout << "Linked List:" << endl;
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "Empty" << endl;
    }
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp -> next = head;
    head = temp;
    return;
}

Node* remove_duplicate_in_sorted(Node *&head)
{
    if (head == NULL || head -> next == NULL)
    {
        cout << "No duplicates" << endl;
    }
    Node *curr = head;
    while (curr -> next != NULL)
    {
        cout << "Curr: " << curr -> data << endl;
        if (curr -> data == curr -> next -> data)
        {
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            delete temp;
        }
        else
        {
            curr = curr -> next;
        }
    }
    return head;
}

int main()
{
    Node *head = new Node(5);
    insert_at_head(head, 4);
    insert_at_head(head, 4);
    insert_at_head(head, 3);
    insert_at_head(head, 3);
    insert_at_head(head, 3);
    insert_at_head(head, 3);
    insert_at_head(head, 2);
    insert_at_head(head, 2);
    insert_at_head(head, 1);
    
    cout << "Before removing duplicates:" << endl;
    display(head);
    
    head = remove_duplicate_in_sorted(head);
    display(head);
    
    return 0;
}