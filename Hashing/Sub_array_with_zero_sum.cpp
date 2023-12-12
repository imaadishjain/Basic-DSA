#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter the element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    unordered_set<int>h;
    int pre_sum=0;

    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(h.find(pre_sum)!=h.end())
        {
            cout<<"True\n";
            return 0;
        }
        if(pre_sum==0)
        {
            cout<<"True\n";
            return 0;
        }
        h.insert(pre_sum);
    }
    cout<<"False\n";
    return 0;
}