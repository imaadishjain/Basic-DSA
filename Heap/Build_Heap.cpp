#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
   public: int size;
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
   void minheapify(int i)
   {
    int lt=left(i);int rt=right(i);
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
   void buildheap()
   {
      for(int i=(size-2)/2;i>=0;i--)
      {
        minheapify(i);
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
    cout<<"Enter the size of heap=";
    cin>>n;
    MinHeap m(n);

    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>m.arr[i];
        m.size++;
    }
    m.buildheap();
    cout<<"Heap\n";
    m.myheap();
    return 0;
}