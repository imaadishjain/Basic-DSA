#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int i,n,t=0,x;
    cout<<"Enter the Size of arrray=";
    cin>>n;

    cout<<"Enter the element of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Number to be searched=";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            cout<<"Found and position="<<i+1<<endl;
            t++; //Flag up
           break; // No break in case of Duplicates
        }
    }
    if(t==0)
    {
        cout<<"Data Not Found"<<endl;
    }
    return 0;
}
