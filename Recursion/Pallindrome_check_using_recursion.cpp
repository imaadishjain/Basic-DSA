#include<bits/stdc++.h>
using namespace std;


bool pallin(string &str, int start, int end)
{
    if(start>=end)
    {
        return true;
    }
    return ((str[start]==str[end]) && (pallin(str,start+1,end-1)));
}
int main()
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    cout<<std::boolalpha;
    cout<<pallin(str,0,str.length()-1);
    cout<<" String is pallindrome\n";
    return 0;
}