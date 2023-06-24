#include<bits/stdc++.h>
using namespace std;
           
int print(int n)
{
    if(n==0)
      return 0;
    
    print(n-1);
    
    cout<<n<<endl;
    
    return 0;
}   

int main()
{
    int n;
    cin>>n;

    cout<<endl;
    print(n);


     return 0;
}