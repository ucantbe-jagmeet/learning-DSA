#include<bits/stdc++.h>
using namespace std;


bool findElement( int arr[], int key, int n)
{
    for( int i=0; i < n; i++)
    {
        if(key==arr[i])
            return true;
    }
    return false;
}

int main(){
    int arr[] = { 12, 5, 62 ,62, 783, 73, 3737, 3732, 22, 252};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = -1;

    bool ans = findElement( arr, key , size);
    cout<<ans;
    return 0;
}
