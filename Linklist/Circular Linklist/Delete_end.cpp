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
 Node* deleteend(Node *head)
 {
    if(head==NULL)
    {
        return head;
    }
    if(head->next==head)
    {
        delete(head);
        return NULL;
    }
    
    Node *curr=head;

    while((curr->next)->next!=head)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=head;
    delete(temp);
    return head;
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
    
    head=deleteend(head);
    cout<<"New Linked List\n";
    printList(head);
    return 0;
}