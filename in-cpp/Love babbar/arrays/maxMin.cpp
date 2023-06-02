#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;

    int arr[n];
    cout<<"Enter numbers in an array";
    for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }


     int max=-19999,min=-19999;

     for (int i=0;i<n;i++)
     {
         if(arr[i]>max)
         {
            max=arr[i];
         }
         else
         {
            min=arr[i];
         }
     }

     cout<<"maximum and minimum of the array is "<< max <<"  "<<min;
}
