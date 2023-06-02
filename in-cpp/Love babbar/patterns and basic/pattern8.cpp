#include<iostream>
using namespace std;

int main()
{
  int n =0;
  cin>>n;

  int i=1;
  char a=65;

  while(i<=n)
  {
      int j=1;
      while(j<=n)
      {
         cout<<a<<" ";
         j++;
      }
      cout<<endl;
      i++;a++;
   }

}
