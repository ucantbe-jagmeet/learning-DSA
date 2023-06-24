#include<bits/stdc++.h>
using namespace std;


int update(int arr[],int size)
{
    cout<<"Entering update function"<<endl;
    arr[0]=123;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nLeaving update function"<<endl;
}
int main()
{
    int arr[]={1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    //Printing array
    update(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
