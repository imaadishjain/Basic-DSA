#include<bits/stdc++.h>
using namespace std;

struct Mystack
{
    int *arr;
    int cap,top;

    Mystack(int c)
    {
        cap=c;
        arr=new int[c];
        top=0;
    }

    void push(int x)
    {
        if(top==cap)
        {
            cout<<"Stack Overflow\n";
        }
        arr[top]=x;
        top++;
    }

    int pop()
    {
        if(top==0)
        {
            cout<<"Stack Underflow\n";
            return INT_MAX;
        }
        int res=arr[top-1];
        top--;
        return res;
    }

    int peek()
    {
        if(top==0)
        {
            cout<<"Stack Underflow\n";
            return INT_MAX;
        }
    }

    int size()
    {
        return arr[top];
    }
    
    bool empty()
    {
        return (top==0);
    }
};

int main()
{
    int n;
    cout<<"Enter the size of stack\n";
    cin>>n;

    Mystack st(n);

    while(1)
    {
        cout<<"0. exit\n1. push\n2. pop\n3. peek\n4. size\n5. empty\n";
        int x;
        cout<<"Enter your choice=";
        cin>>x;
        
        switch(x)
        {
            case 0: exit(0);

            case 1:int x;
                    cout<<"Enter the number=";cin>>x;
                    st.push(x);break;
            
            case 2: cout<<"Deleted Element is="<<st.pop()<<endl;
                    break;
            
            case 3: cout<<"Peek="<<st.peek()<<endl;
                    break;
            
            case 4:cout<<"Size="<<st.size()<<endl;
                   break;
                   
            case 5:cout<<std::boolalpha;
                   cout<<"Stack is empty="<<st.empty()<<endl;
                   break;
            
            default: cout<<"Invalid Choice\n";
        }
    }
}