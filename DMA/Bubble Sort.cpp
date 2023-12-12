#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of array=";
    cin>>n;

    int *a;
    a=(int*) calloc(n,sizeof(int));

    cout<<"Enter the Elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t,ex=0;

    for(int i=0;i<n-1;i++)
    {
        ex=0;
        for(int j=0;j<n-i-1;j++)
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
    cout<<"Printing Sorted Array\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    free(a);
    return 0;

}
