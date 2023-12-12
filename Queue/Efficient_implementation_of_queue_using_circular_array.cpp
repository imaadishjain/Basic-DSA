#include<bits/stdc++.h>
using namespace std;

struct MyQueue
{
    int *arr;
    int cap;
    int size;
    int front;

    MyQueue(int c)
    {
        cap=c;
        size=0;
        front=0;
        arr=new int[c];
    }

    void enqueue(int x)
    {
        if(size==cap)
        {
            cout<<"Queue is OverFlow\n";
            return;
        }

        int rear=(front+size)%cap;

        arr[rear]=x;
        size++;
    }

    int dequeue()
    {
        if(size==0)
        {
            cout<<"Queue is Underflow\n";
            return INT_MAX;
        }
       int res=arr[front];
       front=(front+1)%cap;
       size--;
       return res;
    }

    int getRear()
    {
        if(size==0)
        {
            cout<<"Queue is Underflow\n";
            return INT_MAX;
        }

        return arr[(front+size-1)%cap];
    }

    int getFront()
    {
        if(size==0)
        {
            cout<<"Queue is Underflow\n";
            return INT_MAX;
        }
       
       return arr[front];
    }

    int size1()
    {
        return size;
    }

    bool isfull()
    {
        return (size==cap);
    }

    bool isEmpty()
    {
        return (size==0);
    }
};

int main()
{
    int n;
    cout<<"Enter the size of Queue\n";
    cin>>n;

    MyQueue q(n);

    while(true)
    {
        cout<<std::boolalpha;
        int x;

        cout<<"0. Exit\n1. Enqueue\n2. Dequeuq\n3. getFront\n4. getRear\n5. size\n6. full\n7. empty\n";
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
                   
            case 6: cout<<"Full="<<q.isfull()<<endl;
                   break;

            case 7: cout<<"Empty="<<q.isEmpty()<<endl;
                   break;   

            default: cout<<"Invalid Choice\n";     
        }
    }
}