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

    unordered_map<int,int>m;
    int pre_sum=0;
    int sum;
    cout<<"Enter the sum=";
    cin>>sum;
    int res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(pre_sum==sum)
        {
            res=i+1;
        }
        if(m.find(pre_sum)==m.end())
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end())
        {
            res=max(res,i-m[pre_sum-sum]);
        }
    }
    cout<<"Length of the longest subarray="<<res<<endl;
    return 0;
}
