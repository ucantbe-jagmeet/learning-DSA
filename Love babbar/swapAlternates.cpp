#include<bits/stdc++.h>
using namespace std;

void swapAlternates( int arr[], int n)
{
    for( int i = 0; i< n; i+=2)
    {
        if((i+1)<n)
        {
            swap( arr[i], arr[i+1]);
        }
    }
}

void printArray( int arr[], int size)
{
    for( int i =0; i< size;i++)
    {
        cout<< arr[i]<< " ";
    }
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    swapAlternates( arr, size);
    printArray( arr, size);

    return 0;
}
