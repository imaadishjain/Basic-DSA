#include<bits/stdc++.h>
using namespace std;

void movezeroe(int *a ,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
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
    movezeroe(a,n);
    cout<<"Printing new array\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}