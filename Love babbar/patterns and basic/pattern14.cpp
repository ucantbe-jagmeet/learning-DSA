#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
           cout<<" ";
           space--;
        }
        int star=1;
        while(star<=i)
        {
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }

}
