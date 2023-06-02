#include<bits/stdc++.h>
using namespace std;
           
int main()
{

    int i =5;
    int *p= &i;
    int **p1 = &p;


    cout<<"value of p is "<<p <<endl;
    cout<<"Address of p is "<<&p <<endl;
    cout<<"Value of p1 is "<<p1 <<endl;
    cout<<"Address of p1 is "<<*p1 <<endl;

     return 0;
}