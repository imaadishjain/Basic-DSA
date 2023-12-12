#include<iostream>
using namespace std;

int main()
{
    int a[10]={30,12,60,80,11};
    int i,pos;
    int n=5;
    cout<<"Enter the position=";
    cin>>pos;
4
    if(pos>n || pos<1)
    {
        cout<<"Deletion is not possible\n";
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
