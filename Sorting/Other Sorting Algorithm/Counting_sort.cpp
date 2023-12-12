#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n, int k)
{
    int *count=new int[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<k;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    
    int *output=new int[n];

    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}


int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int *arr=new int[n];
    int k=0;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        k=max(k,arr[i]);
    }
    counting_sort(arr,n,k+1);
    cout<<"Printing the array in sorted order\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}