#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int i,j,l,t;

    cout<<"Enter the size of an array=";
    cin>>l;

    cout<<"Enter the Elements"<<endl;
    for(i=0;i<l;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    cout<<"Printing the sorted array"<<endl;

    for(i=0;i<l;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
