#include<bits/stdc++.h>
using namespace std;

int tripletSum( int arr[], int size, int key)
{
    for( int i =0; i<size; i++)
    {
        for( int j=i+1; j<size; j++)
        {
            for( int k=j+1; k<size; k++)
            {
                if( arr[i]+ arr[j]+ arr[k] == key)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1 ,2 ,3 ,1 ,2 ,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    tripletSum( arr, size, key);
    return 0;
}
