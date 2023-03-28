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
        cout << temp->data << " ";
        temp = temp->next;
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
    temp->next = head;
    head = temp;
    return;
}

Node* remove_duplicate_in_unsorted(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "No duplicates" << endl;
    }
    map<int, bool> visited;
    Node* prev = NULL;
    Node *curr = head;
    while (curr -> next != NULL)
    {
        if (visited[curr -> data] == true)
        {
            prev -> next = curr -> next;
            delete curr;
            curr = prev -> next;
        }
        else
        {
            visited[curr -> data] = true;
            prev = curr;
            curr = curr -> next;
        }
    }
    return head;
}

int main()
{
    Node *head = new Node(5);
    insert_at_head(head, 3);
    insert_at_head(head, 4);
    insert_at_head(head, 3);
    insert_at_head(head, 2);
    insert_at_head(head, 3);
    insert_at_head(head, 3);
    insert_at_head(head, 4);
    insert_at_head(head, 1);
    insert_at_head(head, 2);
    cout << "Before removing duplicates:" << endl;
    display(head);
    head = remove_duplicate_in_unsorted(head);
    display(head);
    return 0;
}