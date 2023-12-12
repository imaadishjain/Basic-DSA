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

Node* RemoveDuplicates(Node *head)
{
    if(head==NULL)
    {
        return head;
    }

    Node *prev=head;
    Node* curr=head->next;

    while(curr!=NULL)
    {
        if(curr->data!=prev->data)
        {
            prev->next=curr;
            prev=curr;
        }
        curr=curr->next;
    }
    prev->next=NULL;
    return head;
}

int main()
{
    Node *head=new Node(5);
    Node *temp1=new Node(15);
    Node *temp2=new Node(15);

    head->next=temp1;
    temp1->next=temp2;

    cout<<"Linked List\n";
    printList(head);

    head=RemoveDuplicates(head);
    cout<<"Unique Element Linklist\n";
    printList(head);
    return 0;
}