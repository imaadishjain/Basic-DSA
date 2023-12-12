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
    int sum;
    cout<<"Enter the sum=";
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(h.find(pre_sum-sum)!=h.end())
        {
            cout<<"True\n";
            return 0;
        }
         if(pre_sum==sum)
        {
            cout<<"True\n";
            return 0;
        }
        h.insert(pre_sum);
    }
    cout<<"False\n";
    return 0;
}