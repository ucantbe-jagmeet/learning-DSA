#include<bits/stdc++.h>
using namespace std;

void merge (int *arr , int s, int e)
{
    int mid = s + (e-s)/2 ;

    int len1 = mid - s + 1 ;
    int len2 = e - mid ;

    int* first = new int[len1];
    int* second = new int[len2];

    //copying values to the new array

    int k = s ; // k is main array Index
    
    for(int i =0 ; i< len1 ; i++)
    {
        first[i] = arr[k++];
    }
    
    k = mid +1 ;
    for(int i =0 ; i< len2 ; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 sort 
    int index1 = 0;
    int index2 = 0;

    k=s ;

    while(index1 < len1  && index2 < len2)
    {
        if(first[index1] < second [index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
            arr[k++] = first[index1++];
    }

    while(index2 < len2)
    {
            arr[k++] = second[index2++];
    }
    
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{

    //base case

    if(s>=e)
        return ;
    
    int mid = s + (e-s)/2 ;
    //Sorting left part
    mergeSort(arr, s, mid);

    //sorting Right part
    mergeSort(arr , mid +1, e );

    // Merge 
    merge(arr, s, e);
}
           
int main()
{
    int arr[8]= {3, 5, 6, 9, 1, 2, 7, 8};
    int n = 8;
    
    mergeSort(arr, 0, n-1);

    for(int i =0; i< n ; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}