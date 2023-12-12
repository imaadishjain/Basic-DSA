#include<bits/stdc++.h>
using namespace std;

void leftrotateD(int *a, int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++)
    {
        a[i-d]=a[i];
    }
    for(int i=d;i<n;i++)
    {
        a[i]=temp[i-d];
    }
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
    int d;
    cout<<"Total no. of rotation=";cin>>d;

    leftrotateD(a,n,d);

    cout<<"Printing the new array\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}