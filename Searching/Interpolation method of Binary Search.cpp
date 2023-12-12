#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int n,i,x,t=0,low,mid,high;

    cout<<"Enter the size of size of sorted array=";
    cin>>n;

    cout<<"Enter the element of Sorted array"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>a[i];

     }
     cout<<"Enter the number to be searched=";
     cin>>x;

     low=0;
     high=n-1;

     while(low<=high)
     {
         mid=low+(high-low)*(x-a[low])/(a[high]-a[low]);
         if(a[mid]==x)
         {
             cout<<"Found and Position="<<mid+1<<endl;
             t++;
             break;
         }
         else if(a[mid]<x)
         {
             low=mid+1;
         }
         else
         {
             high=mid -1;
         }
     }
     if(t==0)
     {
         cout<<"Data Not Found"<<endl;
     }
     return 0;
}
