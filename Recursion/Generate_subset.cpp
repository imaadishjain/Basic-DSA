#include<bits/stdc++.h>
using namespace std;

void subse(string str, string curr="",int i=0)
{
    if(i==str.size())
    {
        cout<<curr<<endl;
        return;
    }
    subse(str,curr,i+1);
    subse(str,curr+str[i],i+1);
}

int main()
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;

    cout<<"Printing the subset\n";
    subse(str);
    return 0;
}