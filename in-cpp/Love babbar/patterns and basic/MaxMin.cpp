#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[]={3,66,11,21,90,34,77};
    int n=7;

    int max=arr[0];
    int min=arr[0];


        if(arr[0]>arr[1])
        {
            max=arr[0];
            min=arr[1];
        }
        else
        {
            max=arr[1];
            min=arr[0];
        }

    for(int i=2;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"min "<<min<<endl;
    cout<<"max "<<max;
}
