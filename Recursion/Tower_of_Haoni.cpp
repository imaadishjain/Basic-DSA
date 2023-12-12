#include<bits/stdc++.h>
using namespace std;

int TOH(int n,char A,char B, char C)
{
    if(n==1)
    {
        cout<<"Move Disc "<<n<<" from "<<A<<" to "<<C<<endl;
        return 0;
    }
    TOH(n-1,A,C,B);
    cout<<"Move Disc "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
    return pow(2,n)-1;
}

int main()
{
    int n;
    cout<<"Enter the total number of Disc=";
    cin>>n;

    cout<<"Printing the steps\n";
    cout<<TOH(n,'A','B','C')<<endl;;
    
    return 0;
}