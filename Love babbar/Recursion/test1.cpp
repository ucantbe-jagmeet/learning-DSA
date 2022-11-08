#include<bits/stdc++.h>
using namespace std;

bool isSorted( int arr[] , int size )
{
    // base case
    if(size ==1 || size ==0)
        return true;
    if(arr[0] > arr[1])
        return false;
    
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5]= {11,22,33,44,55};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans)
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is not Sorted";
    }

     return 0;
}