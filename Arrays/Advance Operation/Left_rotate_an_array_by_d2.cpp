#include<bits/stdc++.h>
using namespace std;

void leftrotateD(int *a, int n, int d)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
void reverse(int *a, int low, int high)
{
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