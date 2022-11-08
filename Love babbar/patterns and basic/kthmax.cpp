#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,2,1,5,6,7};
    int k=4,n=6;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
           int temp =arr[i];
           arr[i+1]=arr[i];
           arr[i]=temp;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"kth maximun is: "<<arr[k];


}
