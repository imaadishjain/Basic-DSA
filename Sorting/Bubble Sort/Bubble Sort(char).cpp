#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10];
    cout<<"Enter the name=";
    cin>>a;
    int l=strlen(a);
    int i,j;
    char ch;

    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1]) // Compare on the bases of ASCII value
            {
                ch=a[j];
                a[j]=a[j+1];
                a[j+1]=ch;
            }
        }
    }
    cout<<"Printing the character of the array in a sorted manner"<<endl;
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
