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

void nthfromend(Node *head, int n)
{
    if(head==NULL)
    {
        return;
    }
    Node *first=head;
    for(int i=1;i<=n;i++)
    {
        if(first==NULL) 
        {
            return;
        }
        first=first->next;
    }

    Node *second=head;

    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<n<<"th element from end is=";
    cout<<second->data<<endl;

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
   
   int n;
   cout<<"Enter the term=";
   cin>>n;
   
   nthfromend(head,n);
   return 0;

}
