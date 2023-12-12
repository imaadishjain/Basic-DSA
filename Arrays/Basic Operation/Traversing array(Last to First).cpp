#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int a[10]={1,2,3,4,5};
    int l=5;
    int i;

    cout<<"Traversing  Array(Last to First)"<<endl;

    for(i=l-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
