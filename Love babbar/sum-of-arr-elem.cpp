#include<bits/stdc++.h>
using namespace std;


int getSum( int arr[], int n)
{
    int ans = 0;

    for( int i = 0; i < n; i++)
    {
        ans = ans +arr[i];
    }
    return ans;
}


int main(){

   int arr[] = { 12, 5, 73, -80, 10};

    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = getSum( arr, size);

    cout<< "Sum of array elements : "<< sum;
}
