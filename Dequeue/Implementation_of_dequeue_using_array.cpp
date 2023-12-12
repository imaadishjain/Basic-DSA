#include<bits/stdc++.h>
using namespace std;

struct MyDequeue
{
    int *arr;
    int cap,size;

    MyDequeue(int c)
    {
        cap=c;
        size=0;
        arr=new int[c];
    }

    void insertFront(int x)
    {
        if(size==cap)
        {
            cout<<"Dequeue is Overflow\n";
            return;
        }

        for(int i=size-1;i>=0;i++)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }

    int deleteFront()
    {
        if(size==0)
        {
            cout<<"Dequeue is Underflow\n";
            return INT_MAX;
        }
        int res=arr[0];
        for(int i=0;i<size-1;i++)
        {
          arr[i]=arr[i+1];            
        }
        size--;
        return  res; 
    }


    int getFront()
    {
        if(size==0)
        {
            cout<<"Dequeue is Underflow\n";
            return INT_MAX;
        }
        return arr[0];
    }


    void insertRear(int x)
    {
        if(size==cap)
        {
            cout<<"Dequeue is Overflow\n";
            return;
        }
       arr[size]=x;
       size++;
    }

    int deleteRear()
    {
       if(size==0)
        {
            cout<<"Dequeue is Underflow\n";
            return INT_MAX;
        }

        int res=arr[size-1];
        size--;
        return res;
    }

    int getRear()
    {
       if(size==0)
        {
            cout<<"Dequeue is Underflow\n";
            return INT_MAX;
        }
       return arr[size-1]; 
    }

    int size1()
    {
        return size;
    }

    bool isFull()
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
    int m;
    cout<<"Enter the size of Dequeue=";
    cin>>m;

    MyDequeue dq(m);

    while(1)
    {
        cout<<"0. Exit\n1. Insert at Front\n2. Insert at Rear\n3. Delete at Front\n4. Delete at Rear\n5. Get Front\n6. Get Rear\n7. Size\n8. Full\n9. Empty\n";
        
        int x;
        cout<<"Enter your choice=";
        cin>>x;

        switch(x)
        {
            case 0:  exit(0);
                    
            case 1:   int n;
                      cout<<"Enter the data=";cin>>n;
                      dq.insertFront(n);break;
            
            case 2:  int p;
                      cout<<"Enter the data=";cin>>p;
                      dq.insertRear(p);break;
            
            case 3: cout<<"Delete Element="<<dq.deleteFront()<<endl;
                    break;
            
            case 4: cout<<"Delete Element="<<dq.deleteRear()<<endl;
                    break;

            case 5: cout<<"Front Element="<<dq.getFront()<<endl;
                    break;
            
            case 6: cout<<"Rear Element="<<dq.getRear()<<endl;
                    break;

            case 7: cout<<"Size="<<dq.size1()<<endl;
                    break;
            
            case 8: cout<<"Full="<<dq.isFull()<<endl;
                   break;
            
            case 9: cout<<"Empty="<<dq.isEmpty()<<endl;
                    break;

            default: cout<<"Invalid Choice\n";
        }   
    }
    return 0;
}