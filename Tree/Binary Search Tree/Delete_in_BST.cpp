#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
Node *getSuccesor(Node *curr)
{
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
Node *delNode(Node *root, int x)
{
    if(root==NULL)
    {
        return root;
    }
    else if(root->key<x)
    {
        root->right=delNode(root->right,x);
    }
    else if(root->key>x)
    {
        root->left=delNode(root->left,x);
    }
    else
    {
        if(root->right==NULL)
        {
            Node *temp=root->left;
            delete(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            Node *temp=root->right;
            delete(root);
            return temp;
        }
        else
        {
            Node *succ=getSuccesor(root);
            root->key=succ->key;
            root->right=delNode(root->right,succ->key);
        }
    }
    return root;
}
int main()
{
    Node *root=new Node(15);
    root->left=new Node(5);
    root->left->left=new Node(3);

    root->right=new Node(20);
    root->right->left=new Node(18);
    root->right->left->left=new Node(16);
    root->right->right=new Node(80);
   cout<<"BST\n";
    inorder(root);
    int x;
    cout<<endl<<"Enter the node to be deleted=";
    cin>>x;

    root=delNode(root,x);
    cout<<"New BST\n";
    inorder(root);
    return 0;
} 