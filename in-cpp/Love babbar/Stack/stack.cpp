#include<bits/stdc++.h>
using namespace std;
           
int main()
{
    //creation of stack
    stack <int> s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);

    cout<< "Printing top element : "<<s.top()<<endl;

    // poping elements 
    s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    if(s.empty())
    {
        cout<<"Stack is empty......."<<endl;
    }
    else
    {
        cout<<"Stack is not empty..."<<endl;
    }

    cout<<"Size of Stack is: "<<s.size()<<endl;

    return 0;
}