#include<bits/stdc++.h>
using namespace std;

vector<int> reverse( vector<int> arr1, int n, vector<int> arr2, int m)
{
    vector<int> temp;
    int i =0, j =0;
    while( i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr2[j]);
            j++; 
        }
    }

    while(i < n)
    {
        temp.push_back(arr1[i]);
        i++;
    }
    while(j < m)
    {
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}


void print( vector<int> v)
{
    for( int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int> arr1;

    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(9);
    
    
    vector<int> arr2;
    arr1.push_back(2);
    arr1.push_back(4);
    arr1.push_back(6);
    arr1.push_back(8);

    vector<int> ans = reverse( arr1, 5, arr2, 4);
    print(ans);

    return 0;
}