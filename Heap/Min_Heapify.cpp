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

   void minheapify(int i)
   {
    int lt=left(i);
    int rt=right(i);
    int smallest=i;

    if(lt<size && arr[lt]<arr[smallest])
    {
        smallest=lt;
    }
    if(rt<size && arr[rt]<arr[smallest])
    {
        smallest=rt;
    }
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        minheapify(smallest);
    }
   }
};

int main()
{
    int n;
    cout<<"Enter the capacity\n";
    cin>>n;
    MinHeap m(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n-2;i++)
    {
        int x;
        cin>>x;
        m.arr[i]=x;
        m.size++;
    }
   int i;
   cout<<"Enter the voliated index\n";
   cin>>i;
   m.minheapify(i);

   cout<<"New Heap\n";
   for(int i=0;i<m.size;i++)
   {
    cout<<m.arr[i]<<" ";
   }
   return 0;
}