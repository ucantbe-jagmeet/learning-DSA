#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter any two numbers ";
    cin>>a>>b;

    char op;
    cout<<"enter the operation ";
    cin>>op;
    switch(op)
    {
       case '+' :
           cout<<a+b;
           break;
       case '-' :
           cout<<a-b;
           break;
       case '*' :
           cout<<a*b;
           break;
       case '/' :
           cout<<a/b;
           break;
    default:cout<<"please enter a valid operation";
    }

    return 0;
}
