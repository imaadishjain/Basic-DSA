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

struct MyQueue
{
    Node *front,*rear;
    int size;

    MyQueue()
    {
        size=0;
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        {
            front=rear=temp;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }

    int dequeue()
    {
        if(size==0)
        {
            cout<<"Queue is Underflow\n";
            return INT_MAX;
        }

        Node *temp=front;
        int res=front->data;
        front=front->next;
        delete(temp);
        size--;
        return res;
    }

    int getFront()
    {
        if(size==0)
        {
            cout<<"Queue is UnderFlow\n";
            return INT_MAX;
        }
        return front->data;
    }

    int getRear()
    {
        if(size==0)
        {
            cout<<"Queue is Underflow\n";
            return INT_MAX;
        }
        return rear->data;
    }

    int size1()
    {
        return size;
    }

    bool isEmpty()
    {
        return (size==0);
    }
};

int main()
{
    MyQueue q;

    while(true)
    {
        cout<<std::boolalpha;
        int x;

        cout<<"0. Exit\n1. Enqueue\n2. Dequeuq\n3. getFront\n4. getRear\n5. size\n6. empty\n";
        cout<<"Enter your choice=";
        cin>>x;

        switch(x)
        {
            case 0: exit(0);
            case 1: int x;
                    cout<<"Enter the value=";cin>>x;
                    q.enqueue(x);break;
            
            case 2: cout<<"Deleted Element="<<q.dequeue()<<endl;
                    break;
            
            case 3: cout<<"Front Element of Queue="<<q.getFront()<<endl;
                    break;

            case 4: cout<<"Rear Element of Queue="<<q.getRear()<<endl;
                    break;
            
            case 5: cout<<"Size="<<q.size1()<<endl;
                   break;
                   
            case 6: cout<<"Empty="<<q.isEmpty()<<endl;
                   break;   
            default: cout<<"Invalid Choice\n";     
        }
    }
}