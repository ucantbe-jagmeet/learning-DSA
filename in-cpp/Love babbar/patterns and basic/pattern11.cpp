#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i=1;
  char d=65;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<d<<" ";
            j++;
            d++;
        }
        cout<<endl;
        i++;

    }
}
