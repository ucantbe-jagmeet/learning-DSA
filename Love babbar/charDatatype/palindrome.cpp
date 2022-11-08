#include<bits/stdc++.h>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    

}

int getLength(char name [] )
{
    int count=0;
    for(int i =0; name[i]!='\0';i++)
    {
        count++;
    }
    return count ;
}
bool checkPalindrome(char a[], int n )
{
    int s =0 ;
    int e = n-1 ;

    while (s==e)
  {
        if(a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++; e--;
        }
  }

  return 1;
}


int main()
{

    char name[20];

    cout<< "Enter your name "<< endl;
    cin>> name;

    int len = getLength(name);
    cout<<"Length of the string is : "<< len <<endl;

    cout<<" palondrome or not : "<< checkPalindrome(name,len)<<endl;

    // cout<<"Your name is  "<<endl;
    // cout<< name << endl;

    // reverse(name,getLength(name));


    // cout<<"Reverse of the string is : "<<name;
}