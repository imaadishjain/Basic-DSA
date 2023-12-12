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

struct Mystack
{
    Node *head;
    int size;

    Mystack()
    {
        head=NULL;
        size=0;
    }

    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }

    int pop()
    {
        if(size==0 || head==NULL)
        {
            cout<<"Stack Underflow\n";
            return INT_MAX;
        }

        Node *temp=head;
        int res=head->data;
        head=head->next;

        delete(temp);
        size--;
        return res;
    }

    int peek()
    {
        if(size==0 || head==NULL)
        {
            cout<<"Stack Underflow\n";
            return INT_MAX;
        }
       return head->data;
    }

    int size1()
    {
        return size;
    }

    bool empty()
    {
        return (size==0);
    }
};

int main()
{
    Mystack st;

    while(1)
    {
        cout<<"0. exit\n1. push\n2. pop\n3. peek\n4. size\n5. empty\n";
        int x;
        cout<<"Enter your choice=";
        cin>>x;
        
        switch(x)
        {
            case 0: exit(0);

            case 1:int x;
                    cout<<"Enter the number=";cin>>x;
                    st.push(x);break;
            
            case 2: cout<<"Deleted Element is="<<st.pop()<<endl;
                    break;
            
            case 3: cout<<"Peek="<<st.peek()<<endl;
                    break;
            
            case 4:cout<<"Size="<<st.size1()<<endl;
                   break;
                   
            case 5:cout<<std::boolalpha;
                   cout<<"Stack is empty="<<st.empty()<<endl;
                   break;
            
            default: cout<<"Invalid Choice\n";
        }
    }
}