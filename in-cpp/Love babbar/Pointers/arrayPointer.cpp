#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={2,4,6,8,10};

    cout<<"Address of the array is : "<< arr <<endl;
    cout<<"Address of the array is : "<< &arr <<endl;
    cout<<"Address of the array is : "<< &arr[0] <<endl;
    cout<<"Address of the array is : "<< *arr <<endl;
    cout<<"Address of the array is : "<< *arr + 1 <<endl;
    cout<<"Address of the array is : "<< *(arr + 1) <<endl;


    // arr[i] = *(arr + i );
    //--------OR---------
    // i[arr] = *(i + arr) ;

    // Both are same thing we can write in both ways 

    int i =3;

    cout<< i[arr] << endl;    // gives 8 as a output from the same array arr


}