#include<bits/stdc++.h>
using namespace std;


void bucket_sort(int arr[], int n, int k)
{
    int m=arr[0];
    
    for(int i=1;i<n;i++)
    {
        m=max(m,arr[i]);
    }
    m++;

    vector<int>bkt[k];

    for(int i=0;i<n;i++)
    {
        int bi=(k*arr[i])/m;
        bkt[bi].push_back(arr[i]);
    }

    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(),bkt[i].end());
    }
    
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            arr[index]=bkt[i][j];
            index++;
        }
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
    int k;
    cout<<"Enter the number of bucket\n";
    cin>>k;
    bucket_sort(arr,n,k);

    cout<<"Printing the element in sorted order\n";

    for(int  i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}