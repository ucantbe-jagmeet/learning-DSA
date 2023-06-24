#include<bits/stdc++.h>
using namespace std ;

int main()
{

    int a = 5 ;
    int *ptr = &a ;

    cout<< "value of a is "<< a << endl;
    cout<< "value of *ptr is "<< *ptr << endl;


    int *ptr2 = ptr ; // Copying a Pointer
    
    cout<< "value of ptr is "<< ptr << endl;
    cout<< "value of ptr2 is "<< ptr2 << endl;



    int i = 3 ; 
    int *p = &i ;

    (*p)++;

    cout<< "value of increement poitner (*p)++ is :  " << *p << endl;


}