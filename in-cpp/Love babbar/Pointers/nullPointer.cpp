#include<bits/stdc++.h>
using namespace std ;

int main()
{
    // int i = 5 ;
    // int *ptr = 0; // null pointer

    // ptr = &i ;

    // cout<< ptr << endl;
    // cout<< *ptr << endl;


    int num =5 ;
    int a = num ;
    a++;

    cout<< num << endl;

    int *ptr = &num ;

    cout << "Before "<< num << endl;

    (*ptr)++;

    cout << "After "<< num << endl;



    return 0;
}