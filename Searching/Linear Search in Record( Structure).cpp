#include<bits/stdc++.h>
using namespace std;

struct student
{
    char name[10];
    int roll;
};

int main()
{
    struct student a[10];
    int n,i,r,t=0;
    cout<<"Enter the total number of record=";
    cin>>n;
    cout<<"Enter the record"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter name=";
        cin>>a[i].name;
        cout<<"Enter roll number=";
        cin>>a[i].roll;
    }

    cout<<"Enter the roll number to be searched=";
    cin>>r;

    for(i=0;i<n;i++)
    {
        if(r==a[i].roll)
        {
            cout<<"Found"<<endl;
            cout<<"Name="<<a[i].name<<endl;
            cout<<"Roll No.="<<a[i].roll<<endl;
            t++; //Flag Up
            break;// No break if Duplicates
        }
    }
    if(t==0)
    {
        cout<<"Data not found"<<endl;
    }
    return 0;
}
