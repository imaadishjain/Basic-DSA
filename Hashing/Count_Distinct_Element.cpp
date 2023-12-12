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
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            res++;
        }
    }
    cout<<"Distinct Elements="<<res<<endl;
    cout<<"-----------"
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    cout<<"Distinct Element="<<s.size();
    return 0;
}