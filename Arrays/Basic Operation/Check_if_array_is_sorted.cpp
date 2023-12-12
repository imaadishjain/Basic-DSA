#include<bits/stdc++.h>
using namespace std;

int checksort(int *a, int n)
{
   for(int i=0;i<n-1;i++)
   {
    if(a[i]>a[i+1])
    {
        return 0;
    }
   }
   return 1;
}

int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the Element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    if(checksort(a,n))
    {
        cout<<"Array is sorted\n";
    }
    else{
        cout<<"Array is not sorted\n";
    }
    return 0;
}