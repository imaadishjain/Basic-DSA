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

Node* floor(Node *root,int x)
{
    Node *res=NULL;
    while(root!=NULL)
    {
        if(root->key==x)
        {
            return root;
        }
        else if(root->key<x)
        {
            res=root;
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }
    return res;
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
    cout<<endl<<"Enter the number to be floored=";
    cin>>x;

    cout<<"Floored valued is="<<floor(root,x)->key<<endl;
    return 0;
} 