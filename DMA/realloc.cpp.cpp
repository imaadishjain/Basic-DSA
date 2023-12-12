#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size=";
    cin>>n;

    char *a;
    a=(char*) calloc((n+1),sizeof(char));

    cout<<"Enter the Name=";
    cin>>a;
    cout<<"Printing your name="<<a<<endl;

    cout<<"Re-allocating the size of array"<<endl;
    cout<<"Enter the new-size=";
    cin>>n;

    a=(char*) realloc(a,(n+1));

    cout<<"Enter the new name=";
    cin>>a;

    cout<<"Printing the new name="<<a<<endl;
    free(a);
    return 0;
}
