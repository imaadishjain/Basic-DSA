#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int *arr;
    int cap,size;

    MyHash(int b)
    {
        cap=b;
        size=0;
        arr=new int[cap];
        for(int i=0;i<cap;i++)
        {
            arr[i]=-1;
        }
    }
    int hash(int key)
    {
        return key%cap;
    }

    bool in(int key)
    {
        if(size==cap)
        {
            return false;
        }
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
        {
            i=(i+1)%cap;
        }
        if(arr[i]==key)
        {
            return false;
        }
        else
        {
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool search(int key)
    {
        int h=key%cap;
        int i=h;

        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }

    bool del(int key)
    {
        if(size==0)
        {
            return false;
        }
        int h=hash(key);
        int i=h;

        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            {
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
            {
                return false;
            }
        }
        return false;
    }
};

int main()
{
    struct MyHash h(7);
    cout<<std::boolalpha;
    cout<<h.in(49)<<endl;
    cout<<h.in(72)<<endl;

    cout<<h.in(56)<<endl;

    cout<<h.del(56)<<endl;
    cout<<h.search(56)<<endl;
    cout<<h.search(70)<<endl;

}