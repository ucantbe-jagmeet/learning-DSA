#include<bits/stdc++.h>
using namespace std;

int getMax( int arr[], int n)
{
    int max= INT_MIN;
    for(int i =0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin( int arr[], int n)
{
    int min= arr[0];
    for(int i =0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}


int main()
{
    int arr[] = { 2, 677, 267, 27, 588, 457, 998, 74};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = getMax( arr, size);
    int min = getMin( arr, size);

    cout<< "Max and min from the given array is: "<< max << " and "<<min<<endl;
    return 0;
}
