#include<bits/stdc++.h>
using namespace std;

int searchLeft(int arr[], int size , int key)
{
    int start =0;
    int end = size-1;

    int mid = start + (end- start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
             end = mid -1;
        }

        if(arr[mid]>key)
        {
            end = mid -1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }

        mid = start + (end- start)/2;
    }
    return ans ;
}

int searchRight(int arr[], int size , int key)
{
    int start =0;
    int end = size-1;

    int mid = start + (end- start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
             start = mid + 1;
        }

        if(arr[mid]>key)
        {
            end = mid -1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }

        mid = start + (end- start)/2;
    }
    return ans;
}



int main()
{
    int arr[6]={0,0,1,1,1,1};
    int index = searchLeft(arr,6,1);
    int index2 = searchRight(arr,6,1);

    cout<<"Number 1 is at left index "<<index<<endl;
    cout<<"Number 1 is at right index "<<index2;

    return 0;

}
