#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size=";
    cin>>n;

    int *a=new int[n];
    cout<<"Enter the element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c;

    for(int i=0;i<n;i++)
    {
       bool flag=false;
       c=1;
       for(int j=0;j<i;j++)
       {
        if(a[i]==a[j])
        {
            flag=true;
            break;
        }
       }
       if(flag==true)
       continue;

       for(int j=i+1;j<n;j++)
       {
        if(a[j]==a[i])
        {
            c++;
        }
       }
       cout<<a[i]<<" "<<c<<endl;
    }
    cout<<"-------------"<<endl;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto x: m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}