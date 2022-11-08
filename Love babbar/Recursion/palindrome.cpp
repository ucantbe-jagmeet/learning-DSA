#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &str , int i)
{
    if(i>str.length() -i - 1)
        return true;

    if(str[i]!=str[str.length() -i - 1])
        return false;    
        
    else
       return palindrome(str, i+1);
}

int main()
{
    string name = "ababa";

    bool ans =  palindrome( name ,0);
    if(ans)
        cout<<"yes palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;
     return 0;
}