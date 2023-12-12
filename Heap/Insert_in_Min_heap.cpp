#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    public :int *arr;
            int size;
            int capacity;

public:
     MinHeap(int c)
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
            return;
        }
        arr[size]=x;
        size++;

        for(int i=size-1; i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
};


int main()
{
    int n;
    cout<<"Enter the capacity of heap=";
    cin>>n;

    MinHeap m(n);

    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m.insert(x);
    }

    cout<<"MinHeap\n";
    for(int i=0;i<n;i++)
    {
        cout<<m.arr[i]<<" ";
    }
    return 0;
}
