#include<bits/stdc++.h>
using namespace std;
void print(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void insertion(int a[100],int n)
{
    int val,pos;
    int i;
    cout<<"Enter the position=";
    cin>>pos;
    if(pos>n+1)
    {
        cout<<"Insertion is not possible"<<endl;
    }
    else
    {
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        cout<<"Enter the value to be inserted=";
        cin>>val;
        a[pos-1]=val;
        n++;
        print(a,n);
    }
}
void deletion(int a[100],int n)
{
    int pos;
    int i;
    cout<<"Enter the position=";
    cin>>pos;
    if(pos>n)
    {
        cout<<"Deletion is not possible"<<endl;
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        print(a,n);
    }
}
void modify(int a[100],int n)
{
    int val,pos;
    cout<<"Enter the position=";
    cin>>pos;
    if(pos>n)
    {
        cout<<"Modification is not possible"<<endl;
    }
    else
    {
    cout<<"Enter the new value=";
    cin>>val;

    a[pos-1]=val;
    print(a,n);
    }
}
void revers(int a[100],int l)
{
    int i,t;
    for(i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }
    print(a,l);
}
void searching(int a[100],int n)
{
    int i,j,t=0,x;
    cout<<"Enter the number to be searched=";
    cin>>x;

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Found and Position="<<i+1<<endl;
            t++;
            break;
        }
    }
    if(t==0)
    {
        cout<<"Data not Found"<<endl;
    }
}
void sorting(int a[100],int l)
{
    int i,j,t,ex=0,k;
    cout<<"1.Assecnding"<<"\t"<<"2.Descending"<<endl;
    cout<<"Enter your choice=";
    cin>>k;
    for(i=0;i<l-1;i++)
    {
        ex=0;
        for(j=0;j<l-i-1;j++)
        {
            if(a[j]>a[j+1] && k==1)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                ex++;
            }
            if(a[j]<a[j+1] && k==2)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                ex++;
            }
        }
        if(ex==0)
        {
            break;
        }
    }
    print(a,l);

}
int main()
{
    int a[100];
    int i,n,c;
    cout<<"Enter the size of array(less than 100)=";
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<endl;
    cout<<"\t0.Exit"<<endl<<"\t1.Insertion"<<endl<<"\t2.Delete"<<endl<<"\t3.Modify"<<endl<<"\t4.Reverse"<<endl<<"\t5.Print"<<endl<<"\t6.Search"<<endl<<"\t7.Sorting"<<endl;
    cout<<endl<<"Enter your choice=";
    cin>>c;

    switch(c)
    {
        case 0: exit(0);break;
        case 1: insertion(a,n);break;
        case 2: deletion(a,n);break;
        case 3: modify(a,n);break;
        case 4: revers(a,n);break;
        case 5: print(a,n);break;
        case 6: searching(a,n);break;
        case 7: sorting(a,n);break;

        default: cout<<"Invalid Choice"<<endl;
    }
    return 0;
}
