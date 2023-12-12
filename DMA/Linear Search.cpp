#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,t=0;
    cout<<"Enter the size of array=";
    cin>>n;

    int *a;
    a=(int*) calloc(n,sizeof(int));

    cout<<"Enter the Element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Element to be searched=";
    cin>>x;

    for(int i=0;i<n/2;i++)
    {
        if(a[i]==x)
        {
            cout<<"Found and Position="<<i+1;
            t++;break;
        }
        if(a[n-i-1]==x)
        {
            cout<<"Found and Position="<<n-i;
            t++;break;
        }
    }
    if(t==0)
    {
        cout<<"Data Not Found\n";
    }
    free(a);
    return 0;
}
