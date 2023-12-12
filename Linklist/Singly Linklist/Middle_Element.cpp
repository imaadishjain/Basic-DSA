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

void printmiddle(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *slow=head;
    Node *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=(fast->next)->next;
    }
    cout<<"Middle Element is="<<slow->data<<endl;
}

int main()
{
   Node* head=new Node(5);
   Node* temp1=new Node(10);
   Node* temp2=new Node(15);
   head->next=temp1;
   temp1->next=temp2;

   cout<<"Linked List\n";
   printList(head);

   printmiddle(head);
   return 0;

}
