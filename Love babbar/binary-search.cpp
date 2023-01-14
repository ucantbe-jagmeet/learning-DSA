#include<iostream>
using namespace std;

int binarySearch( int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2 ;

    while( start <= end)
    {
        if( arr[mid]==key)
        {
            return mid;
        }
        if( key < arr[mid])
        {
            end = mid -1;
        }
        else
        {
            start = mid+1;
        }
        int mid = (start + end)/2 ;
    }
    return -1;
}


int main()
{
    int even[] = { 2, 4, 33, 66, 77, 99, 101, 121};
    int odd[] = { 2, 4, 33, 66, 77, 99, 101, 121, 133};

    int index1 = binarySearch(even, 8, 121);
    int index2 = binarySearch(odd, 9, 121);

    cout<< index1<<endl;
    return 0;
}
