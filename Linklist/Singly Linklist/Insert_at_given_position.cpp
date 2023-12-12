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

Node* insertpos(Node* head, int x, int pos)
{
    Node *temp=new Node(x);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=1;(i<=pos-2 && curr!=NULL);i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        return head;
    }
    
    temp->next=curr->next;
    curr->next=temp;
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

   int x,pos;
   cout<<"Enter the data=";
   cin>>x;
   cout<<"Enter the pos=";
   cin>>pos;
   
   head=insertpos(head,x,pos);

   cout<<"New Linked List\n";
   printList(head);
   return 0;

}

