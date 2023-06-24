#include<bits/stdc++.h>
using namespace std;
           
int main()
{
    int m,n;
    cin>>m>>n;

   // m = row
   // n = col

    int** arr = new int*[m];

    for(int i = 0 ; i<m ; i++)
    {
        arr[i]= new int[n];
    }

    // Creation End

    // taking input
    for (int i = 0; i < m; i++)
    {
        for(int j =0 ; j < n ; j++)
         {
             cin>>arr[i][j];
         }
    }

    //displaying output

    for (int i = 0; i < m; i++)
    {
        for(int j =0 ; j < n ; j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }


    // deleting heap memory
     for(int i = 0 ; i<m ; i++)
    {
        delete [] arr[n];
    }

    delete [] arr;


     return 0;
}