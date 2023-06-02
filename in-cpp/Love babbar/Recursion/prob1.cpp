// SUm of elements in an Array
#include<bits/stdc++.h>
using namespace std;
           
int Add(int arr[] , int n)
{
    // base case
    if(n==0)
        return 0;

    if(n==1)
        return arr[0];
    
    int remainingPart =  Add( arr +1 , n-1);
    int sum = arr[0]+ remainingPart;
    return sum;
}   

int main()
{
    int arr[5]={3,2,5,1,6};
    int size = 5;

    int ans = Add(arr, size);
    cout<<ans;
     return 0;
}