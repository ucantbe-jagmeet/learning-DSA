#include<bits/stdc++.h>
using namespace std;

int sortArray( int arr[], int size)
{
   int curr =0, left =0, right=size-1;

   while(curr <= right)
   {
       if(arr[curr]==0)
       {
           swap(arr[curr], arr[left]);
           curr++;
           left++;
       }
       else if( arr[curr] ==1)
       {
           curr++;
       }
       else
       {
           swap(arr[curr], arr[right]);
           right--;
       }
   }
   return 0;
}

void printArray( int arr[], int size)
{
    for(int i =0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = { 0, 1, 2, 1, 2, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortArray( arr, size);
    printArray( arr, size);

    return 0;
}
