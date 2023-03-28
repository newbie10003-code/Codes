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

int LL_to_int(Node* &head, int len){
    Node* temp = head; int ans = 0;
    while (temp != NULL)
    {
        cout << "Pow: " << pow(10, len-1) << endl;
        ans = temp -> data * (pow(10,len-1)) + ans;
        len--;
        temp = temp -> next;
    }cout << endl;
    cout << "LL to int: " << ans << endl;
    return ans;
}

Node* int_to_LL(Node* &head, int ans){
    while (ans != 0)
    {
        int digit = ans % 10;
        head = insert_at_head(head, digit);
        ans = ans / 10;
    }
    return head;
}

int main(){

    Node* head1 = new Node(5);
    head1 = insert_at_head(head1, 4);
    cout << "First LL:" << endl;
    display(head1);
    int l1 = length(head1);
    int ans1 = LL_to_int(head1, l1);
    cout << endl;

    Node* head2 = new Node(5);
    head2 = insert_at_head(head2, 4);
    head2 = insert_at_head(head2, 3);
    cout << endl;
    cout << "Second LL:" << endl;
    display(head2);
    int l2 = length(head2);
    int ans2 = LL_to_int(head2, l2);

    int ans = ans1 + ans2;
    cout << endl << "Ans = " << ans << endl;
    Node* head = NULL;
    head = int_to_LL(head, ans);
    display(head);

}