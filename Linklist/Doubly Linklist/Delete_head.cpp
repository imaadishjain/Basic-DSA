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
    cout<<"NULL->";
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

Node *deletebegin(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        delete(head);
        return  NULL;
    }

    Node *temp=head;

    head=head->next;
    head->prev=NULL;
    delete(temp);
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

    head=deletebegin(head);
    cout<<"New Linked List\n";
    printList(head);

    return 0;
}