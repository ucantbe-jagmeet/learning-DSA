#include<bits/stdc++.h>
using namespace std;


int pow(int n)
{
    //base case
    if(n==0)
        return 1;

    return 2 * pow(n-1) ;

}

int main()
{
    int n ;
    cin>>n;

    int ans = pow(n);

    cout<<"2 raised to the power of "<<n<<" is: "<<ans<<endl;    
     return 0;
}