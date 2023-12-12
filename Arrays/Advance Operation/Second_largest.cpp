#include<bits/stdc++.h>
using namespace std;
int secondlargest(int *a, int n)
{
    int res=-1;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        if(a[largest]<a[i])
        {
            res=largest;
            largest=i;
        }
        else if(a[largest]!=a[i])
        {
            if(res==-1||a[res]<a[i])
            {
                res=i;
            }
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

    int s=secondlargest(a,n);
    if(s!=-1)
    cout<<"Second largest element="<<a[s];
    else{
        cout<<"No second largest element\n";
    }
    return 0;
}