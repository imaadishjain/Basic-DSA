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


bool search(Node *root, int x)
{
    while(root!=NULL)
    {
        if(root->key==x)
        {
            return 1;
        }
        else if(root->key<x)
        {
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }
    return 0;
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
   
    int x;
    cout<<"Enter the data to be search=";
    cin>>x;

    if(search(root,x))
    {
        cout<<"Present\n";
    }
    else
    {
        cout<<"Not Present";
    }

    return 0;
}