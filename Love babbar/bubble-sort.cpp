#include<bits/stdc++.h>
using namespace std;

void bubbleSort( int arr[], int n)
{
    for( int i =1; i < n-1; i++)
    {
        for ( int j =0; j < n-1; j++)
        {
            if( arr[j] > arr[j+1])
                swap( arr[j], arr[j+1]);
        }
    }
}

void printArray( int arr[], int size)
{
    for ( int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = { 10, 1, 7, 6, 14, 9, 15};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort( arr, size);
    printArray( arr, size);
    return 0;
}