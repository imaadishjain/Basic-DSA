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
Node *insert(Node *root, int x)
{
    if(root==NULL)
    {
        return new Node(x);
    }
    else if(root->key<x)
    {
        root->right=insert(root->right,x);
    }
    else
    {
        root->left=insert(root->left,x);
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
    cout<<endl<<"Enter the new data to be inserted=";
    cin>>x;
    root=insert(root,x);
    cout<<"New BST\n";
    inorder(root);
    return 0;
}