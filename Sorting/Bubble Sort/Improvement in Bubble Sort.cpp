#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int i,j,l,t;
    int ex=0;

    cout<<"Enter the size of array=";
    cin>>l;

    cout<<"Enter the Element of array"<<endl;

    for(i=0;i<l;i++)
    {
          cin>>a[i];
    }
    for(i=0;i<l-1;i++)
    {
        ex=0;
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                ex++;
            }
        }
        if(ex==0)
        {
            break;
        }
    }
    cout<<"Printing Sorted Array"<<endl;
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
