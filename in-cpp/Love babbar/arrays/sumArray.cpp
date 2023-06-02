#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter numbers in Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Sum of numbers
    int sum=0;
     for(int i=0;i<n;i++)
    {
       sum=sum +arr[i];
    }

    cout<<"Sum of the array is: "<<sum;


}
