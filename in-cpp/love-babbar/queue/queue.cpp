#include<bits/stdc++.h>
using namespace std;
           
int main()
{
    queue <int> q;
    q.push(18);
    q.push(23);
    q.push(36);
    q.push(40);

        cout<<"Front Element is: "<<q.front()<<endl;
        cout<<"Rear element is: "<<q.back()<<endl;
        cout<<"Size of Queue is: "<<q.size()<<endl;
        cout<<"Queue Elements are:  "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}