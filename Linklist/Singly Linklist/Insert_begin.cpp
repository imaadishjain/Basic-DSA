#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

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

Node * insertbegin(Node *head, int x)
{
    Node *temp=new Node(x);

    temp->next=head;
    return temp;
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
   
   int x;
   cout<<"Enter the Node data that to be inserted at begining=";
   cin>>x;
   
   head=insertbegin(head,x);

  cout<<"New Linked List\n";
   printList(head);
  
  return 0;
}