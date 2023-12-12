#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array=";
    cin>>n;

    int* a;
    a=(int*) calloc(n,sizeof(int));

    cout<<"Enter the Elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int b=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
    }
    cout<<"Biggest Element="<<b<<endl;
    free(a);
    return 0;
}
