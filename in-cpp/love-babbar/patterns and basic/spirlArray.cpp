#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter elements in array: ";

    // taking arr input
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>arr[m][n];
        }
    }
    //printing array
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<arr[m][n]<<" ";
        }
        cout<<endl;
    }
}