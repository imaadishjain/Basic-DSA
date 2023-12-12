#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10][40];
    int i,j,l;
    char ch[40];

    cout<<"Enter the number of names=";
    cin>>l;
    cout<<"Enter the names"<<endl;
    for(i=0;i<l;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(ch,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],ch);

            }
        }
    }
    cout<<"Printing the name in a sorted manner"<<endl;
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
