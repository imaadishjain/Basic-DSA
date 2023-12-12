#include<bits/stdc++.h>
using namespace std;

int  removedupl(int *a,int n)
{
    int res=1;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[res-1])
        {
            a[res]=a[i];
            res++;
        }
    }
    return res;
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

    int l=removedupl(a,n);
    cout<<l<<endl;
    cout<<"Printing new array\n";
    for(int i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }
 return 0;
}