#include<bits/stdc++.h>
using namespace std;

int binary_searchR(int arr[],int low, int high, int x)
{
    if(low>high)
    {
        return -1;
    }
    int mid=low+(high-low)/2;

    if(arr[mid]>x)
    {
        low=mid+1;
    }
    else if(arr[mid]>x)
    {
        high=mid-1;
    }
    else
    {
        return mid+1;
    }
    return binary_searchR(arr,low,high,x);
}

int main()
{
    int x,n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int *arr=new int[n];

    cout<<"Enter the elements in sorted order\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elememt to be search=";
    cin>>x;

    cout<<"The poistion of "<<x<<"="<<binary_searchR(arr,0,n-1,x);
    return 0;
}
