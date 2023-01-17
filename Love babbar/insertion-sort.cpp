#include<bits/stdc++.h>
using namespace std;
    
void insertionSort( int arr[], int size)
{
    for( int i =1; i<size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            if( arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
               break; 
            }
        }
        arr[j+1] = temp;
    }
}

void printArray( int arr[], int size)
{
    for( int i =0; i < size ;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = { 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort( arr, size);
    printArray( arr, size);
    return 0;
}