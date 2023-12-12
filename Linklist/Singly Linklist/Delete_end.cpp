#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printList(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

Node *deleteend(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    Node *curr=head;

    while((curr->next)->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;
}
int main()
{
   Node* head=new Node(5);
   Node* temp1=new Node(10);
   Node* temp2=new Node(15);
   head->next=temp1;
   temp1->next=temp2;

   cout<<"Old Linked List\n";
   printList(head);

   head=deleteend(head);
   cout<<"New Linked list\n";

   printList(head);

   return 0;
}