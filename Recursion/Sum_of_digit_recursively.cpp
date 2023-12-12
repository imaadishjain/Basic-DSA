#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n<=9)
    {
        return n;
    }
    return n%10+Sum(n/10);
}

int main()
{
    int n;
    cout<<"Enter the number=";
    cin>>n;
    
    cout<<"The Sum of Digit of a number="<<Sum(n)<<endl;
    return 0;
}
