#include<bits/stdc++.h>
using namespace std;

void get(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}


int findUnique(int arr[], int size)
{
    int ans =0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<"\nEnd of loop";
    return ans;
}


int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;

    int arr[n];

    get(arr,n);
    int num = findUnique(arr,n);
    cout<<"Unique Number is "<<num;
}
