#include<bits/stdc++.h>
using namespace std;


int get(int arr[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,4,3};
   int num = get(arr,5);
    cout<<"answer is "<<num;
}
