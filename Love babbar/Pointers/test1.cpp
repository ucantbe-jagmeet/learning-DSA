#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a =6;
     int *ptr = &a ;
     cout << "Address is : " << ptr << endl;
     cout << "Value is : " << *ptr << endl;


     double d =4.5 ;
     double *ptr2 = &d ;

     cout << "Address is : " << ptr2 << endl;
     cout << "Value is : " << *ptr2 << endl;

     cout<<"size of integer is : " <<sizeof(a) << endl;
     cout<<"size of pointer is : " <<sizeof(ptr)<< endl;
     cout<<"size of pointer is : " <<sizeof(ptr2)<< endl;

}