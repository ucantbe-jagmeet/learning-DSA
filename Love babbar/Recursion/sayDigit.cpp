#include<bits/stdc++.h>
using namespace std;
           
int sayDigit(string arr[], int n)
{
    if(n==0)
        return 0;
    
    int digit = n % 10;
    n = n/10;
    sayDigit(arr, n);
    cout<< arr[digit]<<" ";


    return 911;

}

int main()
{
    string arr[10]={"Zero", "One" , "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cin>>n;

    sayDigit(arr,n);

     return 0;
}