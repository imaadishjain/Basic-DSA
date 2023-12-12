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

int main()
{
    Node* head=new Node(5);
    Node* temp1=new Node(10);
    Node* temp2=new Node(15);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    
    printList(head);
    return 0;
}