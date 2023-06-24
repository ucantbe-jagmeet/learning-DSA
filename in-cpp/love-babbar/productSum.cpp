#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n = 234;
    int product = 1, sum =0;

    cout<< "Your number is : "<<n << endl;
    
    while(n!=0)
    {
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;
        n=n/10;
    }

    int answer = product - sum;
    cout<<"Solution of the number is : "<< answer << endl;

    return 0;
}