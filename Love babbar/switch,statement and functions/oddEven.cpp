#include<iostream>
using namespace std;

bool oddEven(int a)
{
    if(a&1)
        return 0;
    else
        return 1;
}
int main()
{
    int num;
    cin>>num;

    oddEven(num);
    if(oddEven(num))
    {
        cout<<"Even number";
    }
    else
    {
        cout<<"odd number";
    }
}
