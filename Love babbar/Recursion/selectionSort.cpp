#include<bits/stdc++.h>
using namespace std;


void sortArray(int* arr,int i,int n){
    if(i==n-1){
        return;
    }
    int min=i;

    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
    sortArray(arr,i+1,n);
}
int main()
{
    int arr[5] = { 2, 5, 1, 6, 9};
    sortArray(arr, 0,5);

    for(int i =0; i<5 ; i++)
        cout<<arr[i]<<" ";
    return 0;
}