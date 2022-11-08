#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
   int start = 0;
   int end = n-1;

   while(start<=end)
   swap(arr[start],arr[end]);
   start++;
   end--;
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5]={5,15,75,3,2};
    int arr1[6]={11,5,15,75,3,2};


      reverse(arr,5);
      reverse(arr1,6);

      printArray(arr,5);
      printArray(arr1,6);

}
