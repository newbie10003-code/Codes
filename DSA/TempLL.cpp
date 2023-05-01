#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value =this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout << "Memory freed for Node: " << value << endl;
    }
};

void insertion(Node*&head,int pos,int val)
{
    Node* nodetoinsert=new Node(val);
    Node* curr=head;
    if(pos==1)
    {
      nodetoinsert->next=curr;
      head=nodetoinsert;
      curr->next=head;
      return;
    }
    int cnt=1;
    while(cnt<pos-1)
    {
        curr=curr->next;
        cnt++;
    }
    nodetoinsert->next=curr->next;
    curr->next=nodetoinsert;

}

Node* deletion(Node*head,int pos)
{
    Node* prev = NULL;
    Node* curr=head;
    int cnt=1;
    while(cnt<=pos)
    {
        prev = curr;
        curr=curr->next;
        cnt++;
    }
    cout << "Prev before deleting: " << prev -> data << endl; // 7
    cout << "Curr before deleting: " << curr -> data << endl; // 5
    Node* temp = prev;
    while (temp -> next != prev)
    {
        temp = temp -> next;
    }
    cout << "Temp: " << temp -> data << endl;
    temp -> next = curr;
    prev -> next = NULL;
    head = curr;
    delete prev;
    return head;
    
}

void display(Node*head)
{
  Node*temp=head;
  do{
    cout<<temp->data<<" ";
    temp=temp->next;
   }while(temp!=head);
}
 
int main()
{
    Node* node1=new Node(5);
    Node* head=node1;
    insertion(head,1,7);
    insertion(head,3,9);
    display(head);
    cout << endl;
    head = deletion(head,3);
    display(head);
}