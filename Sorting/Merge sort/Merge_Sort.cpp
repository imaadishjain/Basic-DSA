#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l,int mid, int r)
{
    int m=(mid-l)+1;
    int n=r-mid;
    int *left=new int[m];
    int *right=new int[n];

    for(int i=0;i<m;i++)
    {
        left[i]=arr[i+l];
    }
    for(int i=0;i<n;i++)
    {
       right[i]=arr[i+mid+1];
    }
    int k=l;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(left[i]<=right[j])
       {
        arr[k]=left[i];
        i++;k++;
       }
       else
       {
        arr[k]=right[j];
        j++;k++;
       }
    }

       while(i<m)
       {
        arr[k]=left[i];
        i++;k++;
       }

       while(j<n)
       {
        arr[k]=right[j];
        j++;k++;
       }
    }

void merge_sort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
 int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int *arr=new int[n];
    
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);

   cout<<"Printing the arrray in sorted order\n";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;

}