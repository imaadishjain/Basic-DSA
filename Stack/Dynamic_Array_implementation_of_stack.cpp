#include<bits/stdc++.h>
using namespace std;

struct Mystack
{
     vector<int>s;
     int top;

     Mystack()
     {
        top=0;
     }

     void push(int x)
     {
        s.push_back(x);
        top++;
     }

     int pop()
     {
        if(top==0)
        {
            cout<<"Stack Underflow\n";
            return INT_MAX;
        }

        int res=s.back();
        s.pop_back();
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
        return s.back();
     }

     int size()
     {
        return top;
     }

     bool empty()
     {
        return (top==0);
     }
};

int main()
{
    Mystack st;

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