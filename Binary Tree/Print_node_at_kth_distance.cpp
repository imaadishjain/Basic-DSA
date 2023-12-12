#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;

    Node(int c)
    {
        key=c;
        left=NULL;
        right=NULL;
    }
};


void printkDist(Node* root, int k)
{
    if(root==NULL)
    {
        return;
    }
    else if(k==0)
    {
        cout<<root->key<<" ";
        return;
    }
    else
    {
        printkDist(root->left,k-1);
        printkDist(root->right,k-1);
    }
}


int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->left->left=new Node(60);
    root->right->right=new Node(50);

   int k;
   cout<<"Enter the value of k=";
   cin>>k;
   printkDist(root,k);
   return 0;
}