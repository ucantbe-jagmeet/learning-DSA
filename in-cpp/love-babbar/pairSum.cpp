#include<bits/stdc++.h>
using namespace std;

int pairSum( int arr[], int size, int key)
{
    for( int i =0; i < size ; i++)
    {
        for( int j=i+1; j<size ; j++)
        {
            if( arr[i] + arr[j] == key)
            {
                cout<<arr[i]<< " "<< arr[j]<<endl;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = { 9,1, 13, 4, 5,11 ,7,8, 9};
    int size = sizeof( arr)/ sizeof(arr[0]);
    int key = 18;
    pairSum( arr, size ,key);
    return 0;
}
