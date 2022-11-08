#include<bits/stdc++.h>
using namespace std;


void insert ( stack <int> &s, int value)
{
        if(s.empty())
        {
            s.push(value);
            return ;
        }
   
        int element = s.top();
        s.pop();
        insert( s , value);

        s.push(element);
}

void reverse( stack<int> &s)
{
    if(s.empty()) 
        return;

    int element = s.top();
    s.pop();
    reverse(s);

    insert( s, element);
}

int main()
{
    stack <int> s;

    s.push(12); 
    s.push(24); 
    s.push(36); 
    s.push(48); 

    reverse( s);    

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}