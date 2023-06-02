#include<iostream>
using namespace std;

int binarySearch( int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;

    while( start <= end)
    {
        if( arr[mid]==key)
        {
            return mid;
        }
        if( key > arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}


int main()
{
    int even[6] = { 2, 4, 6, 7, 9, 11};
    int odd[5] = { 2, 4, 6, 7, 9};

    int index = binarySearch(even, 6, 4);
    int index2 = binarySearch(odd, 5, 9);

    cout<<"Index of 4 is "<<index<<endl;
    cout<<"Index of 9 is "<<index2<<endl;
    return 0;
}
