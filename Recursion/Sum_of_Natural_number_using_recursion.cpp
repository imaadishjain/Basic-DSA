#include<bits/stdc++.h>
using namespace std;

int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+getsum(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;

    cout<<"Sum of n naturals number="<<getsum(n);
    return 0;
}