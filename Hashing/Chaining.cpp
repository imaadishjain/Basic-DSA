#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int Bucket;
    list<int> *table;

    MyHash(int b)
    {
        Bucket=b;
        table=new list<int>[b];
    }

    void in(int key)
    {
        int i=key%Bucket;
        table[i].push_back(key);
    }
    void del(int key)
    {
        int i=key%Bucket;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i=key%Bucket;
        for(auto x: table[i])
        {
           if(x==key) 
           {
            return true;
           }
        }
     return false;
    }
};

int main()
{
    struct MyHash h(7);
    h.in(70);
    h.in(71);
    h.in(9);
    h.in(56);
    h.in(72);
   
   cout<<std::boolalpha;
    cout<<h.search(56)<<endl;
    cout<<h.search(57)<<endl;
    h.del(56);
    cout<<h.search(56)<<endl;
    return 0;
}