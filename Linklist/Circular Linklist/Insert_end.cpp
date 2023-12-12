#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printList(Node *head)
{
    cout<<"Printing Linked List"<<endl;

    if(head==NULL)
    {
        return;
    }

    Node* curr=head;

    do
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    } while (curr!=head);
    cout<<"head"<<endl;
}
Node * insertend(Node *head, int x)
{
    Node* temp=new Node(x);

    if(head==NULL)
    {
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;

        int t=head->data;
        head->data=temp->data;
        temp->data=t;
    }
    return temp;
}
int main()
{
    Node* head=new Node(5);
    Node* temp1=new Node(10);
    Node* temp2=new Node(15);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    
    printList(head);

    int x;
    cout<<"Enter the number that to be inserted at end=";
    cin>>x;
   head=insertend(head,x);
   cout<<"New Linked List\n";
   printList(head);
    return 0;
}