#include<bits/stdc++.h>
using namespace std;

int fun(int a,int b)
{
   int ans=1;
   for(int i=0;i<b;i++)
   {
       ans=ans*a;
   }
   return ans;
}

int main()
{
    int a,b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    int ans = fun(a,b);

    cout<<ans;
}
