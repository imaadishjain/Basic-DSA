#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n==1)
    {
        return 0;
    }
    return 1+fun(n/2);
}

int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    cout<<"Log of base 2 of n is equal to="<<fun(n);
    return 0;
}