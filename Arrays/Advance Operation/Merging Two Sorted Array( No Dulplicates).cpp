#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],b[10],c[20],i=0,j=0,k=0,m,n,t=0;

    cout<<"Enter the size of First Sorted array=";
    cin>>m;

    cout<<"Enter the element"<<endl;
    for( i=0;i<m;i++)
    {
        cin>>a[i];

    }

    cout<<"Enter the size of second sorted array=";
    cin>>n;
    cout<<"Enter the element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    i=0;j=0;k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;k++;
        }
        else
        {
            c[k]=a[i];
            i++;j++;k++; // For no Duplicates
        }
    }

    while(i<m)
    {
        c[k]=a[i];
        i++;k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;k++;
    }

    cout<<"Printing sorted array"<<endl;
    for(t=0;t<k;t++)
    {
        cout<<c[t]<<" ";
    }
    return 0;
}
