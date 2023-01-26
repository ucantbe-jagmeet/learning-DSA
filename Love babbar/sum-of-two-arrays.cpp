#include<bits/stdc++.h>
using namespace std;


int sumArray( int a[], int n, int b[], int m)
{
    vector<int> temp;
    int i=0;
    int j=0;
    while( i>=n && j >=m)
    {
        int ans = a[n] + b[m];
        temp.push_back(ans);
        i++;
        j++;
    }
}    

int main()
{
    int a[] = { 4, 5, 1};    
    int b[] = { 3, 4, 5};   

    int n= 3; 
    int m= 3;

    sumArray( a, n , b, m);

     return 0;
}