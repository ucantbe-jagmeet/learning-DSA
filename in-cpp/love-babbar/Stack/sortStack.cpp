#include<bits/stdc++.h>
using namespace std;

void sortedInsert( stack <int> &stack, int num)
{
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    
    sortedInsert( stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
	// base case
    if(stack.empty())
        return ;
    int num = stack.top();
    stack.pop();
    
    // recursive call
    sortStack( stack);
    
    sortedInsert( stack, num);
    
}

int main()
{
     stack <int> s;

     s.push(12);
     s.push(90);
     s.push(2);
     s.push(56);
     s.push(88);

     sortStack( s);

     while(!s.empty())
     {
        cout<<s.top()<<endl;
        s.pop();
     }

    return 0;
}