#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    int size;
    int capacity;
    int *arr;
  public:  MinHeap(int c)
    {
        size=0;
        capacity=c;
        arr=new int[c];
    }

    int left(int i)
    {
        return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
    }
    int parent(int i)
    {
        return (i-1)/2;
    }

    void insert(int x)
    {
        if(size==capacity)
        {
            cout<<"No space in Heap\n";
        }
        arr[size]=x;
        size++;

        for(int i=size-1; i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }

    void decreasekey(int i, int x)
    {
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void myheap()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the size of heap\n";
    cin>>n;
    MinHeap m(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    m.insert(x);
   }
   int i,x;
   cout<<"Enter the index=";
   cin>>i;
   cout<<"Enter the value=";
   cin>>x;
   m.decreasekey(i,x);
   cout<<"New Heap\n";
   m.myheap();
   return 0;
}