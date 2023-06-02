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

int main()
{

    char name[20];

    cout<< "Enter your name "<< endl;
    cin>> name;


    cout<<"Your name is  "<<endl;
    cout<< name << endl;
    cout<<"Length of the string is : "<< getLength(name)<<endl;

    reverse(name,getLength(name));
    cout<<"Reverse of the string is : "<<name;
}