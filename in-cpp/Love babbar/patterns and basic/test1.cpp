#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{   for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
}

int main
{
    int arr[]={90,12,8,50,46,60};
    int n = sizeof(arr[])/sizeof(arr[0]);
    print(arr[],n);
    return 0;
}
