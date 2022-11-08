#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size , int key)
{
    int start = 0;
    int end = size -1;

    int mid = (start+end)/2;

    while(start <= end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key > arr[mid])
        {
            start = mid+1;
        }

        else {
            end=mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main()
{
    int even[6]={11,22,33,44,55,66};
    int odd[5]={22,33,44,55,66};

    int index =binarySearch(even, 6, 66);
    cout<<"Index of 66 is : "<<index<<endl;

    int index1 =binarySearch(odd, 5, 55);
    cout<<"Index of 55 is : "<<index1;

}
