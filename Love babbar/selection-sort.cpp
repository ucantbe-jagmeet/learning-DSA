#include<bits/stdc++.h>
using namespace std;

void selectionSort( int arr[], int size)
{

    for(int i =0; i< size-1; i++){
        int minIndex = i;

        for( int j =i+1; j< size -1; j++)
        {
            if( arr[j] < arr[minIndex] )
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray( int arr[], int size)
{
    for( int i =0; i< size ;i++)
    {
        cout<< arr[i]<< " ";
    }
}

int main(){

    int arr[] = { 11, 25, 12, 22, 64};
    int size = sizeof( arr)/sizeof( arr[0]);

    selectionSort( arr, size);
    printArray( arr, size);
    return 0;
}