#include<bits/stdc++.h>
using namespace std;

void insertionSort(int* arr,int i,int n){
    // base case
    if(i==n)
        return;
     
    int j=i;
    int ele=arr[i];
    
    while(j>0 && ele < arr[j-1]){
        arr[j]=arr[j-1];
        j--;
    }
    arr[j]=ele;

    insertionSort(arr,i+1,n);
}

int main()
{
    int arr[5] = { 2, 5, 1, 6, 9};
    insertionSort(arr, 0,5);

    for(int i =0; i<5 ; i++)
        cout<<arr[i]<<" ";
    return 0;
}