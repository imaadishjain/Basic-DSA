#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i=0,j=0;

    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
           cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}

int main()
{
    int m,n;
    cout<<"Enter the size of first sorted array\n";
    cin>>m;
    int *a=new int[m];
    cout<<"Enter the elements\n";
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of second sorted array\n";
    cin>>n;
    int *b=new int[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout<<"Merged two sorted array\n";
    merge(a,b,m,n);
    return 0;
}