#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Your array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
