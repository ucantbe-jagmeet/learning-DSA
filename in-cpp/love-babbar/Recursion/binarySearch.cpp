#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr , int s , int e,  int key)
{ 
    // base case
    if(s>e)
        return false ;

    int mid = s + (e -s)/2 ;

    if (arr[mid]==key)
        return true  ;

    if( arr[mid] < key)
    {
        return binarySearch(arr , mid+1 , e , key );
    }
    else
    {
        return binarySearch(arr , s , mid-1 , key );
    }

}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5};
    int size =5;
    int key = 4;

    int ans = binarySearch(arr ,0 ,5, key);

    if(ans)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

    return 0;
}