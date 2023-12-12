#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void printList(Node *head)
{
    cout<<"NULL<->";
    while(head!=NULL)
    {
        cout<<head->data<<"<->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

Node* insertend(Node *head, int x)
{
    Node *temp=new Node(x);

    if(head==NULL)
    {
        return temp;
    }

    Node*curr=head;

    while(curr->next!=NULL)
    {
        curr=curr->next;
    }

    curr->next=temp;
    temp->prev=curr;
    return head;
}

int main()
{
    Node *head=new Node(5);
    Node *temp1=new Node(10);
    Node *temp2=new Node(15);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    printList(head);
    int x;
    cout<<"Enter the data to be inserted at end=";
    cin>>x;
    head=insertend(head,x);
    cout<<"New Linked List\n";
    printList(head);

    return 0;
}