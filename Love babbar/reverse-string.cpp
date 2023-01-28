#include<bits/stdc++.h>
using namespace std;

int getLength( char name[])
{
    int count = 0;
    for(int i=0; name[i] != '\0';i++)
    {
        count++;
    }

    return count;
}

void reverse( char name[] , int n)
{
    int s = 0;
    int e = n-1;
   
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

void print(char name[], int n)
{
    for(int i=0; name[i]!='\0';i++)
    {
        cout<<name[i];
    }
}

int main(){
    char name[10];
    cout<<"Enter Your Name"<<endl;
    cin>>name;
    int len = getLength(name);
    cout<<len<<endl;    
    reverse(name,len);
    print(name,len);

    return 0; 
}