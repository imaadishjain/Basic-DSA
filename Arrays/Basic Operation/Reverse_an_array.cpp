#include<bits/stdc++.h>
using namespace std;


void reversearr(int *a, int n )
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
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

    reversearr(a,n);

    cout<<"New array\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}