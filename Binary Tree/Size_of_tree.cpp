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


int getSize(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    return getSize(root->left)+getSize(root->right)+1;
}


int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    
    cout<<"The Size of the tree is="<<getSize(root)<<endl;
    
    return 0;
}