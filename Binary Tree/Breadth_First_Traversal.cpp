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


void printlevel(Node *root)
{
    if(root==NULL)
    {
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";

        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);

    cout<<"Printing Tree in Level order traversal\n";
    printlevel(root);
    return 0;
}