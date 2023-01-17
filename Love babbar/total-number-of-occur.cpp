#include<bits/stdc++.h>
using namespace std;

int firstOccur( int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while( start <= end)
    {
        if( arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if( key > arr[mid])
        {
            start = mid +1;
        }
        else if( key < arr[mid])
        {
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int lastOccur( int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while( start <= end)
    {
        if( arr[mid] == key)
        {
            ans = mid;
            start = mid +1;
        }
        else if( key > arr[mid])
        {
            start = mid +1;
        }
        else if( key < arr[mid])
        {
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}

int main()
{
    int arr[]= { 0, 0, 0, 1, 2, 2, 2, 2, 2, 5, 5, 6, 6, 6, 6, 6};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int key = 6; 
    int firstIndex = firstOccur( arr, size, key);
    int lastIndex = lastOccur( arr, size, key);

    int occur = lastIndex - firstIndex;
    cout<<occur;
    return 0;
}