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

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int value = 90;
    insert( s, value);

    //for printing stack elements
    while(!s.empty())
    {
        cout<< s.top()<<endl;
        s.pop();
    }

    return 0;
}