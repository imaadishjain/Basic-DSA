#include<bits/stdc++.h>
using namespace std;

int fibb(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    cout<<"Fibconacci term="<<fibb(n);
    return 0;
}