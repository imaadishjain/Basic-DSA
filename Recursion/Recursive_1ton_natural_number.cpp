#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0)
    {
        return;
    }

    fun(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    cout<<"Printing the natural numbers from 1ton\n";
    fun(n);
    return 0;
}