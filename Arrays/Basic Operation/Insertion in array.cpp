#include<iostream>
using namespace std;

int main()
{
    int a[10]={30,20,60,40};
    int n=4;
    int i,pos,val;

    cout<<"Enter the position where you want insert your data=";
    cin>>pos;

    if(pos>n+1 || pos<1)
    {
        cout<<"Insertion is not possible"<<endl;
    }
    else
    {

        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        cout<<"Enter the value=";
        cin>>val;
        a[pos-1]=val;
        n++;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
