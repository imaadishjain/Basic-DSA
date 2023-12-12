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
Node* deleteKth(Node *head, int k)
{
   if(head==NULL)
   {
    return head;
   }
   else if(head->next==head && k==1)
   {
    delete(head);
    return NULL;
   }
   else if(head->next!=head &&k==1)
   {
    head->data=head->next->data;
    
    Node *temp=head->next;
    head->next=head->next->next;

    delete(temp);
    return head;
   }
   else
   {
    Node *curr=head;

    for(int i=1;i<=k-2;i++)
    {
        curr=curr->next;
        if(curr->next==head)
        {
            return head;
        }
    }
    Node *temp=curr->next;

    curr->next=curr->next->next;
    delete(temp);
    return head;
   }
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
    
    int k;
    cout<<"Enter the Kth term to be deleted=";
    cin>>k;
    head=deleteKth(head,k);

    cout<<"Printing New linklis\n";
    printList(head);
    return 0;
}