#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size , int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,33};
    cout<<"Enter the number you want to search ?"<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if(found)
    {
        cout<<"Number is found";
    }
    else
    {
        cout<<"Number is not found";
    }

}
