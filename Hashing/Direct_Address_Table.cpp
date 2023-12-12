#include<bits/stdc++.h>
using namespace std;

void in(bool a[], int x)
{
    a[x]=1;
}
void del(bool a[], int x)
{
    a[x]=0;
}
bool search(bool a[], int x)
{
    return a[x];
}
int main()
{
    int n;
    cout<<"Enter the number of keys=";
    cin>>n;
    
    bool a[n]={0};
    
    in(a,8);
    in(a,4);
    in(a,5);

    del(a,8);
    cout<<search(a,8)<<endl;
    cout<<search(a,4)<<endl;
    cout<<search(a,5)<<endl;
    return 0;
}