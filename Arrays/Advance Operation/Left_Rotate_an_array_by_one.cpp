#include<bits/stdc++.h>
using namespace std;

void leftrotateOne(int *a, int n)
{
    int temp=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int main()
{
    int n;
    cout<<"Enter the total number of element=";cin>>n;
    int *a=new int[n];

    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    leftrotateOne(a,n);
   
   cout<<"Printing the roatated array\n";
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
   return  0;
}