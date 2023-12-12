#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10][40];
    char x[40];
    int n,i,t=0;
    cout<<"Enter the Size of string=";
    cin>>n;
    cout<<"Enter the names"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the name you want to search=";
    cin>>x;

    for(i=0;i<n;i++)
    {
        if(strcmp(x,a[i])==0)  // To compare the two string
        {
            cout<<"Found and position="<<i+1<<endl;
            t++;  // Flag Up
            break; // If Duplicates then no break
        }
    }
    if(t==0)
    {
        cout<<"Not Found"<<endl;
    }
    return 0;

}
